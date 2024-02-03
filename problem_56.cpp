/*
Leetcode 150 Interview Questions

56. Merge Intervals

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Using loops and sliding window, sorting */

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());

        int n = intervals.size(), i=0, j=1;
        if(n<2) return intervals;

        while(j<n){
            int start = intervals[i][0];
            int end = intervals[i][1];

            while(j<n && end >= intervals[j][0]){
                end = max(intervals[j][1], end);
                j++;
            }
            
            result.push_back({start, end});
            i = j;
            j++;
        }
        while(i<n){
            result.push_back(intervals[i]);
            i++;
        }
        return result;
    }
};