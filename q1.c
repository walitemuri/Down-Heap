#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 20
#define COLS 10

void readFile (int heapArray[20][10], char * filename);

int main (int argc, char* argv[])
{
    int heapArray [20][10] = { 0 };
    char * file = malloc(sizeof(char) * strlen(argv[1]));
    strcpy(file, argv[1]);

    readFile(heapArray, file);

    printf("%d  %d\n" , heapArray[0][1], heapArray[2][0]);

    return 0;
}

//Populate Array

void readFile (int heapArray[20][10], char * filename) {
    
    FILE * ptr = fopen(filename , "r");
    if (ptr == NULL) {
        printf("File Error\n");
        return;
    }

    for (int i = 0; i < ROWS; i++ ) {
        fscanf(ptr, "%d %d %d %d %d %d %d %d %d %d", &heapArray[i][0],&heapArray[i][1],
                    &heapArray[i][2],&heapArray[i][3],&heapArray[i][4],&heapArray[i][5],
                    &heapArray[i][6],&heapArray[i][7],&heapArray[i][8],&heapArray[i][9]);
    }
}