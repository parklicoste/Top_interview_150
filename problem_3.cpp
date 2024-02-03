/*
Leetcode 150 Interview Questions

3. Longest Substring Without Repeating Characters

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Unordered map */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> sub;
        int mx = 0, i = 0, n = s.length(), prev = 0;
        while(i < n){
            if(sub.find(s[i]) != sub.end() && sub[s[i]] >= prev) prev = sub[s[i]] + 1;
            
            sub[s[i]] = i;
            mx = max(mx, i - prev + 1);
            i++;
        }
        return mx;
    }
};