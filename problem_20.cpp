/*
Leetcode 150 Interview Questions

20. Valid Parentheses

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Using Stack */

class Solution {
public:
    bool isValid(string s) {
        int n = s.length(), i = 0;
        stack<char> st;
        
        for(char c: s){
            if(c == '{' || c == '(' || c == '[') st.push(c);
            else if(c == '}' || c == ')' || c == ']'){
                if(st.empty()) return false;
                else{
                    char x = st.top();
                    if(x == '{' && c == '}' ) st.pop();
                    else if(x == '(' && c == ')' ) st.pop();
                    else if(x == '[' && c == ']' ) st.pop();
                    else return false;
                }
            }
        }
        return st.empty();
    }
};