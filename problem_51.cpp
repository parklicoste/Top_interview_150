/*
Leetcode 150 Interview Questions

54. Spiral Matrix

*/

/* ------ Approach 1 ---- */
/*Runtime O(n2)*/
/* sort + outer loop */
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        
        vector<int> spiral;

        int dir = 0, top = 0, down = m-1, left = 0, right = n-1;


        //right, down, left, up
        //repeat
        
        while(top <= down && left <= right){
            if (dir == 0){ // left to right
                for(int i =  left; i<=right; i++){
                    spiral.push_back(matrix[top][i]);
                }
                top++;
            }             
            else if(dir == 1){  // top to down
                for(int i = top;  i<=down; i++){
                    spiral.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dir == 2){ // right to left
                for(int i = right; i>=left; i--){
                    spiral.push_back(matrix[down][i]);
                }
                down--;
            }
            else if(dir == 3){  // down to top
                for(int i = down; i>=top; i--){
                    spiral.push_back(matrix[i][left]);
                }
                left++;
            }

            dir++;

            if(dir == 4) dir = 0;


        }
        
        return spiral;
    }
};
