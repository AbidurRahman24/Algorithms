// code link: https://leetcode.com/problems/binary-search/
/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() -1;
        while(l<=r)
        {
            int mid = (l + r) / 2;
            
            if (nums[mid] == target) {
                return mid; // Return the index when the target is found
            }
            
            if (target > nums[mid]) {
                l = mid + 1; // Move the left pointer to the right half
            } else {
                r = mid - 1; // Move the right pointer to the left half
            }
        }
        return -1;
    }
};