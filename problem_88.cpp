/*
Leetcode 150 Interview Questions

88. Merge Sorted arrays

*/

/* ------ Approach 1 ---- */
/*Runtime O(m+n)*/
/* Iteratively */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> sorted;
        int i=0, j=0;

        if(n == 0) return;

        while(i<m && j<n){
            if( nums1[i] <= nums2[j] ){
                sorted.push_back(nums1[i]);
                i++;
            }
            else{
                sorted.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            sorted.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            sorted.push_back(nums2[j]);
            j++;
        }
        nums1 = sorted;
    }
};

/* ------ Approach 1 ---- */
/*Runtime O(m+n)*/
/* Greedy */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++) nums1[m+i] = nums2[i];
        sort(nums1.begin(), nums1.end());
        
    }
};