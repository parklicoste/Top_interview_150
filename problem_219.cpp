/*
Leetcode 150 Interview Questions

219. Contains Duplicate II

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Using Unordered map and updating index */

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++){
            if(mp.find(nums[i]) == mp.end()) mp[nums[i]] = i;
            else{
                if((i - mp[nums[i]]) <= k) return true;
                else mp[nums[i]] = i;
            }  
        }

        return false;
    }
};