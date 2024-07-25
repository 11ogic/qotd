//给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
//
// 你可以假设数组是非空的，并且给定的数组总是存在多数元素。
//
//
//
// 示例 1：
//
//
//输入：nums = [3,2,3]
//输出：3
//
// 示例 2：
//
//
//输入：nums = [2,2,1,1,1,2,2]
//输出：2
//
//
//
//提示：
//
//
// n == nums.length
// 1 <= n <= 5 * 10⁴
// -10⁹ <= nums[i] <= 10⁹
//
//
//
//
// 进阶：尝试设计时间复杂度为 O(n)、空间复杂度为 O(1) 的算法解决此问题。
//
// Related Topics 数组 哈希表 分治 计数 排序 👍 2238 👎 0

#include "stdio.h"
#include "stdlib.h"

int compare(const void* p1, const void* p2) {
    return (*(int *)p1) - (*(int *)p2);
}

int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int maxCnt = 1, maxVal = nums[0], curCnt = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            curCnt++;
            if (curCnt > maxCnt) {
                maxCnt = curCnt;
                maxVal = nums[i];
            }
        } else {
            curCnt = 1;
        }
    }
    return maxVal;
}
