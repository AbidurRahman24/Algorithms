// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
/*
Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg.
Note that 0 is neither positive nor negative.

 

Example 1:

Input: nums = [-2,-1,-1,1,2,3]
Output: 3
Explanation: There are 3 positive integers and 3 negative integers. The maximum count among them is 3.
*/

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int mn=0;
        int mx=0;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] < 0) {
                mn++;
                left++;
            } else if (nums[left] == 0) {
                left++;
            } else {
                mx++;
                right--;
            }
        }
        
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] < 0) {
        //         mn++;
        //     } else if (nums[i] == 0) {
        //         continue;
        //     } else {
        //         mx++;
        //     }
        // }
        int res = max(mn,mx);
        return res;
    }
};