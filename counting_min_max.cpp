// problem link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

/*
1351. Count Negative Numbers in a Sorted Matrix
Easy
4.6K
119
Companies
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

 

Example 1:

Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
Example 2:

Input: grid = [[3,2],[1,0]]
Output: 0
*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ctn = 0;
        int row = 0;
        int col = n - 1;

        while (row < m && col >= 0) {
            if (grid[row][col] < 0) {
                ctn += (m - row); // Add the number of negative elements in the current column
                col--;
            } else {
                row++;
            }
        }

        // for(int i=0; i<grid.size(); i++){
        //     for(int j=0; j<grid[i].size(); j++)
        //     {
        //         if(grid[i][j] < 0)
        //         {
        //             ctn++;
        //         }
        //     }
        // }
        return ctn;
    }
};