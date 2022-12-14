/*
File Owned By: Wali Temuri 1183379
CIS 25ROWS A4, Question 1 
Email: wmtemuri@uoguelph.ca
Date Created: 2022-11-21
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 20
#define COLS 10

typedef struct Node{
    int sum_key;
    int key[3];
    int content[7];
} node;

void swap (node *a, node *b);
void heapify(node * arr, int N, int i);
void downHeap (node * arr);
void printHeap(node * arr);
void constructHeapArray (node * heap , int opArray[ROWS][COLS]);
void readFile (int objectArray[ROWS][COLS], char * filename);

/*
Function: Main  
In: int argc, char* argv[]
Out: 0
Post: Reads data from f.dat file, computes downheap, prints result
*/
int main (int argc, char* argv[])
{
    int objectArray [ROWS][COLS] = { 0 };
    char * file = malloc(sizeof(char) * 5);
    strcpy(file, "f.dat");

    node heap[ROWS] = {0};

    readFile(objectArray, file);
    constructHeapArray(heap, objectArray);
    downHeap(heap);
    printHeap(heap);
}


/*
Function: Responsible for reading data file and populating a 2D array where each row is an object
In: int objectArray[ROWS][COLS], char * filename
Out: void
Post: Populates 2D array with data
*/
void readFile (int objectArray[ROWS][COLS], char * filename) {
    
    FILE * ptr = fopen(filename , "r");
    if (ptr == NULL) {
        printf("File Error\n");
        return;
    }

    for (int i = 0; i < ROWS; i++ ) {
        fscanf(ptr, "%d %d %d %d %d %d %d %d %d %d", &objectArray[i][0],&objectArray[i][1],
                    &objectArray[i][2],&objectArray[i][3],&objectArray[i][4],&objectArray[i][5],
                    &objectArray[i][6],&objectArray[i][7],&objectArray[i][8],&objectArray[i][9]);
    }
}

/*
Function: Constructs the heap Array
In: node *heap, int opArray[ROWS][COLS]
Out: void
Post: Transfer the data from each row in 2D array to heap array
*/
void constructHeapArray (node *heap, int opArray[ROWS][COLS]) {
   
    int sum;  

    for (int i = 0; i < ROWS; i++) {
        sum  = 0;

        sum = opArray[i][0] + opArray[i][1] + opArray[i][2];
        (heap[i]).key[0] = opArray[i][0];
        (heap[i]).key[1] = opArray[i][1];
        (heap[i]).key[2] = opArray[i][2];
        (heap[i]).sum_key = sum;

        for (int j = 0; j < 7; j++) {
            (heap[i]).content[j] = opArray[i][j + 3];
        }
    }
}

/*
Function: swap
In: node *a, node *b
Out: void
Post: Swaps the place of two nodes within an array
*/
void swap (node *a, node *b) {
    
    node tmp = *a;

    *a = *b;
    *b = tmp;
}

/*
Function: Computes min heapify algorithm on node
In: node * arr, int N, int i
Out: void
Post: The i'th node is compared with left and right child, if parent is smallest the alg stops, else a swap is computed
*/
void heapify(node * arr, int N, int i) {

    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left].sum_key < arr[smallest].sum_key) {
        smallest = left;
    }

    if (right < N && arr[right].sum_key < arr[smallest].sum_key) {
        smallest = right;
    }

    if (smallest != i) {
        swap((&arr[i]), (&arr[smallest]));

        heapify(arr, N,smallest);
    }
}

/*
Function: Function completes one iteration of downheap algorithm
In: node * arr
Out: void
Post: Computes downheap in array
*/
void downHeap (node * arr) {
    int startIndex = (ROWS / 2) - 1;

    for (int i = startIndex; i >= 0; i--) {
        heapify(arr,ROWS,i);
    }
}

/*
Function: Prints the heap array data content in order
In: node * arr
Out: void
Post: Prints content in order of array
*/
void printHeap(node * arr)
{
    for (int i = 0; i < ROWS; i++) {
        printf("%d %d %d %d %d %d %d %d %d %d\n",
        arr[i].key[0],arr[i].key[1],arr[i].key[2], arr[i].content[0], arr[i].content[1] , arr[i].content[2], 
        arr[i].content[3], arr[i].content[4], arr[i].content[5] , arr[i].content[6]);
    }
}
