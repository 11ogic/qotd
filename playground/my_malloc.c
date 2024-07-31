#include <stdio.h>
#include <stdlib.h>

int** myMalloc(int r,int c, int *returnSize, int **returnColSizes) {
    int **matrix = (int **)malloc(sizeof(int *) * r);
    *returnColSizes = (int *)malloc(sizeof(int) * r);
    *returnSize = r;
    for (int i = 0; i < r; i++) {
        matrix[i] = (int *)malloc(sizeof(int) * c);
        *(returnColSizes)[i] = c;
    }
    return matrix;
}

int main() {
    return 0;
}