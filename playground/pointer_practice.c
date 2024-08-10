#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int matrix[4][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9},
            {10,11,12}
    };

    int i = rand() % 4, j = rand() % 3;
    printf("matrix[%d][%d] = %d \n", i, j, matrix[i][j]);
    printf("matrix[%d][%d] = %p \n", i, j, &matrix[i][j]);

    int *p = matrix;
//    printf("%d \n", *(p + i * (sizeof(matrix[0]) / sizeof(matrix[0][0])) + j));
//    printf("%p \n", p + i * (sizeof(matrix[0]) / sizeof(matrix[0][0])) + j);
//    printf("%d \n", *(*(matrix + i) + j));
//    printf("%p \n", *(matrix + i) + j);
    printf("%p \n", p);
    printf("%p \n", &matrix[0][0]);

    return 0;
}