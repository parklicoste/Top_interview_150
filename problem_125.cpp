/*
Leetcode 150 Interview Questions

125. Valid Palindrome

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Using isalnum function */

class Solution {
public:
    bool isPalindrome(string s) {
        string check = "";
        for(char x: s)
            if(isalnum(x)) check+= (char)tolower(x);
    
        
        int i = 0, j = check.length()-1;
        while(i<=j){
            if(check[i] != check[j]) return false;
            i++;
            j--;
        }

        return true;
        
    }
};