/*
Leetcode 150 Interview Questions

20. Valid Parentheses

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Sliding Window */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), max = 0, buy=0, sell=1;

        while(sell < n){
            if(prices[buy] > prices[sell])buy = sell;
            else if(prices[sell] - prices[buy] > max) max = prices[sell] - prices[buy];
            sell++;
        }
        
        return max;
        
    }

};