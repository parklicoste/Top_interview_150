/*
Leetcode 150 Interview Questions

11. Container woith most Water

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Using two pointers */

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1, area = 0;

        while(i < j){
            int ht = min(height[i], height[j]);
            int wd = j-i;
            if(ht * wd > area) area = ht*wd;

            if(height[j] > height[i]) i++;
            else j--;
        }
        return area;
    }
};