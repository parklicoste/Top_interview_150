/*
Leetcode 150 Interview Questions

33. Search in Rotated Sorted Array

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* left sorted array or right sorted array */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r= nums.size()-1, mid=0;

        while(l<=r){
            mid = (l + r)/2;    

            int start = nums[l], middle = nums[mid], end = nums[r];

            if(nums[mid] == target) return mid;

            if(nums[l] <= nums[mid]){ // left half sorted
                if(nums[l] <= target && nums[mid] >= target) r = mid -1;
                else l = mid+1;
                
            }
            else { // right half is sorted
                if(nums[mid] <= target && nums[r] >= target) l = mid + 1;
                else r = mid - 1;
            }
            
        }
        return -1;
    }
    
};