/*
Leetcode 150 Interview Questions

169. Majority Element

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Using unordered map */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> tracker;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(tracker.find(nums[i]) == tracker.end()){
                tracker[nums[i]] = 1;
            }
            else tracker[nums[i]]++;
        }
        for(auto i :tracker){
            if(i.second > n/2) return i.first;
        }
        
        return 0;
    }
};