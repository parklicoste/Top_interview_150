/*
Leetcode 150 Interview Questions

238. Product of Array except Self 

*/
/* ------ Approach 1 ---- */
/*Runtime O(3n) = O(n)*/
/* Using Dynamic Programming */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);
        vector<int> right(n);

        left[0] = 1;
        right[n-1] = 1;

        for(int i=1;i<n; i++) left[i] = left[i-1] * nums[i-1];
        for(int i=n-2 ;i>=0; i--) right[i] = right[i+1] * nums[i+1];
        for(int i=0; i<n; i++) nums[i] = left[i] * right[i];
        
        return nums;
    }
};

/* ------ Approach 1 ---- */
/*Runtime O(2n) = O(n)*/
/* Using zeroes and normal iteration */
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(), product = 1, count_zero = 0;
        for(int i: nums){
            if(i == 0) count_zero++;
            else product *= i;
        }

        for(int i=0; i<n; i++){
            if(count_zero > 1) nums[i] = 0;
            else if(count_zero == 1){
                if(nums[i] == 0) nums[i] = product;
                else nums[i] = 0;
            }
            else{
                nums[i] = product/nums[i];
            }
        }
        return nums;
    }
};

