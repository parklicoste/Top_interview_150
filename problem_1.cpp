/*
Leetcode 150 Interview Questions

88. Two Sum

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Unordered map */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> table;

        for(int i=0; i<n; i++){
            if(table.find(target-nums[i]) == table.end()) table[nums[i]] = i;
            else return {table[target-nums[i]], i};
        }

        return {0, 0};
    }
};