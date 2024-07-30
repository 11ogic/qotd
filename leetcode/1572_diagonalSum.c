//给你一个正方形矩阵 mat，请你返回矩阵对角线元素的和。
//
// 请你返回在矩阵主对角线上的元素和副对角线上且不在主对角线上元素的和。
//
//
//
// 示例 1：
//
//
//
//
//输入：mat = [[1,2,3],
//            [4,5,6],
//            [7,8,9]]
//输出：25
//解释：对角线的和为：1 + 5 + 9 + 3 + 7 = 25
//请注意，元素 mat[1][1] = 5 只会被计算一次。
//
//
// 示例 2：
//
//
//输入：mat = [[1,1,1,1],
//            [1,1,1,1],
//            [1,1,1,1],
//            [1,1,1,1]]
//输出：8
//
//
// 示例 3：
//
//
//输入：mat = [[5]]
//输出：5
//
//
//
//
// 提示：
//
//
// n == mat.length == mat[i].length
// 1 <= n <= 100
// 1 <= mat[i][j] <= 100
//
//
// Related Topics 数组 矩阵 👍 132 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
int diagonalSum(int** mat, int matSize, int* matColSize){
    int r = matSize, c = matColSize[0];
    int sum = 0;
    for (int i = 0, lp = 0, rp = c - 1; i < r; i++) {
        if (lp == rp) {
            sum += mat[i][lp];
        } else {
            sum += mat[i][lp] + mat[i][rp];
        }
        lp++;
        rp--;
    }
    return sum;
}
//leetcode submit region end(Prohibit modification and deletion)


