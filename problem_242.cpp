/*
Leetcode 150 Interview Questions

242. Valid Palindrome

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Using unordered map and arrays */

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a1(26, 0), a2(26, 0);
        for(char c: s) a1[c-'a']++;  
        for(char c: t) a2[c-'a']++;
        return a1 == a2;
    }
};

/* ------ Approach 2 ---- */
/*Runtime O(n)*/
/* Using unordered map */

class Solution {
public:
    bool isAnagram(string s, string t) {
       
        unordered_map<char, int> mp1, mp2;

        for(char c: s){
            if(mp1.find(c) == mp1.end()) mp1[c] = 1;
            else mp1[c]++;
        }
        for(char c: t){
            if(mp2.find(c) == mp2.end()) mp2[c] = 1;
            else mp2[c]++;
        }
        return mp1 == mp2;
    }
};