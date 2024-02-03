/*
Leetcode 150 Interview Questions

75. Sort Colors

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* loop */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;
        for(int i: nums){
            if(i==0) red++;
            else if(i==1) white++;
            else blue++;
        }

        int i=0;
        while(i < nums.size()){
            if(red > 0 ){
                nums[i] = 0;
                red--;
            }
            else if(white > 0){
                nums[i] = 1;
                white--;
            }
            else{
                nums[i] = 2;
                blue--;
            }
            i++;
        }
    }
};