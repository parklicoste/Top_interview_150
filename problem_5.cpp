/*
Leetcode 150 Interview Questions

5. Longest Palindromic Substring

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Unordered map, vector + sorting */

class Solution {
public:
    int t[1001][1001];

    bool solver(string& s, int i, int j){
        if(i>=j) return 1;
        if(t[i][j] != -1) return t[i][j]; // important case
        else if(s[i] == s[j]) return t[i][j] = solver(s, i+1, j-1);

        return t[i][j] = 0;
    }

    string longestPalindrome(string s) {
        string pal = "";
        int n = s.length();
        memset(t, -1, sizeof(t));
        for(int i=0; i < n; i++){
            for(int j=i; j< n; j++){
                if(solver(s, i, j) && (j-i+1) > pal.size())
                    pal = s.substr(i, j-i+1);
            }
            
        }
         
        
        return pal;
        
    }
};