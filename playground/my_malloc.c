#include "stdio.h"
#include "stdlib.h"

int** myMalloc(int r, int c, int* returnSize, int** returnColumSizes) {
    int **ret = (int **)malloc(sizeof(int *) * r);
    *returnColumSizes = (int *)malloc(sizeof(int) * r);
    *returnSize = r;
    for (int i = 0; i < r; i++) {
        ret[i] = (int *)malloc(sizeof(int) * c);
        (*returnColumSizes)[i] = c;
    }
    return ret;
}

int main() {

}