/*
File Owned By: Wali Temuri 1183379
CIS 25ROWS A4, Question 1 
Email: wmtemuri@uoguelph.ca
Date Created: ROWS22-11-21
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

void constructHeapArray (node * heap , int opArray[ROWS][COLS]);
void readFile (int objectArray[ROWS][COLS], char * filename);

int main (int argc, char* argv[])
{
    int objectArray [ROWS][COLS] = { 0 };
    char * file = malloc(sizeof(char) * strlen(argv[1]));
    strcpy(file, argv[1]);

    node heap[ROWS] = {0};

    readFile(objectArray, file);
    constructHeapArray(heap, objectArray);

    printf("%d  %d\n" , heap[0].content[0], objectArray[2][0]);

    return 0;
}

//Populate Array

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
