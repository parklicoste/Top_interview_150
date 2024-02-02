/*
Leetcode 150 Interview Questions

15. 3Sum

*/

/* ------ Approach 1 ---- */
/*Runtime O(n^2)*/
/* sort + outer loop + inner 2 sum */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return {};

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){

            if(i>0 && nums[i] == nums[i-1]) continue;
            int j=i+1, k=n-1, target = -nums[i];

            while(j<k){
                if(nums[j] + nums[k] > target) k--;
                else if(nums[j] + nums[k] < target) j++;
                else{
                    while(j<k && nums[k] == nums[k-1]) k--;
                    while(j<k && nums[j] == nums[j+1]) j++;

                    ans.push_back({nums[i], nums[j], nums[k]});
                    k--;
                    j++;
                }
            }
        }
        return ans;
    }
};
