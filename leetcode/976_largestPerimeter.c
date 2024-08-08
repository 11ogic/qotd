//给定由一些正数（代表长度）组成的数组 nums ，返回 由其中三个长度组成的、面积不为零的三角形的最大周长 。如果不能形成任何面积不为零的三角形，返回 0。
//
//
//
//
//
//
//
// 示例 1：
//
//
//输入：nums = [2,1,2]
//输出：5
//解释：你可以用三个边长组成一个三角形:1 2 2。
//
//
// 示例 2：
//
//
//输入：nums = [1,2,1,10]
//输出：0
//解释：
//你不能用边长 1,1,2 来组成三角形。
//不能用边长 1,1,10 来构成三角形。
//不能用边长 1、2 和 10 来构成三角形。
//因为我们不能用任何三条边长来构成一个非零面积的三角形，所以我们返回 0。
//
//
//
// 提示：
//
//
// 3 <= nums.length <= 10⁴
// 1 <= nums[i] <= 10⁶
//
//
// Related Topics 贪心 数组 数学 排序 👍 275 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
#include "stdlib.h"

int compare(const void *p1, const void *p2) {
    return (*(int *)p2) - (*(int *)p1);
}
int largestPerimeter(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int ans = 0;
    for (int i = 0; i < numsSize - 2; i++) {
        if (nums[i] < nums[i+1] + nums[i+2]) {
            ans = nums[i] + nums[i+1] + nums[i+2];
            break;
        }
    }
    return ans;
}
//leetcode submit region end(Prohibit modification and deletion)
