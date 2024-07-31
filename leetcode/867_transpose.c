//给你一个二维整数数组 matrix， 返回 matrix 的 转置矩阵 。
//
// 矩阵的 转置 是指将矩阵的主对角线翻转，交换矩阵的行索引与列索引。
//
//
//
//
//
// 示例 1：
//
//
//输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
//输出：[[1,4,7],[2,5,8],[3,6,9]]
//
//
// 示例 2：
//
//
//输入：matrix = [[1,2,3],[4,5,6]]
//输出：[[1,4],[2,5],[3,6]]
//
//
//
//
// 提示：
//
//
// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 1000
// 1 <= m * n <= 10⁵
// -10⁹ <= matrix[i][j] <= 10⁹
//
//
// Related Topics 数组 矩阵 模拟 👍 264 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include "stdlib.h"

int** myMalloc(int r, int c, int* returnSize, int** returnColSizes) {
    int **mat = (int **)malloc(sizeof(int *) * r);
    *returnColSizes = (int *)malloc(sizeof(int) * r);
    *returnSize = r;
    for (int i = 0; i < r; i++) {
        mat[i] = (int *)malloc(sizeof(int) * c);
        (*returnColSizes)[i] = c;
    }
    return mat;
}

int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int r = matrixSize, c = matrixColSize[0];
    int **ret = myMalloc(c, r, returnSize, returnColumnSizes);
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            ret[i][j] = matrix[j][i];
        }
    }
    return ret;
}
//leetcode submit region end(Prohibit modification and deletion)
