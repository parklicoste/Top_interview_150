/*
Leetcode 150 Interview Questions

57. Insert Interval

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Using 3 parts, before interval, during interval, after interval */

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i=0, j=1, n = intervals.size();
        vector<vector<int>> ans;

        // if(n == 0) return {newInterval};

        int x = newInterval[0];
        int y = newInterval[1];

        // until we find overlap add to ans
        for(i; i<n && x > intervals[i][1]; i++) ans.push_back(intervals[i]);

        // found overlap
        for(i; i<n && y >= intervals[i][0] ;i++){
            x = min(x, intervals[i][0]);
            y = max(y, intervals[i][1]);
        }
        ans.push_back({x,y});

        for(i; i<n; i++) ans.push_back(intervals[i]);

        return ans;
    }
};