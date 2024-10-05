#include "stdio.h"
#include "stdlib.h"

int** myMalloc(int r, int c, int* returnSize, int** returnColumSizes) {
    int **matrix = (int **)malloc(sizeof(int *) * r);
    *returnColumSizes = (int *)malloc(sizeof(int) * r);
    *returnSize = r;
    for (int i = 0; i < r; i++) {
        matrix[i] = (int *)malloc(sizeof(int) * c);
        (*returnColumSizes)[i] = c;
    }
    return matrix;
}

int main() {
    return 0;
}