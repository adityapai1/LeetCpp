class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int checker = matrix[0][0] ;
        bool flag = true;
        for(int i = 1 ; i < matrix.size();i++){

            for(int j = 1 ; j< matrix[i].size(); j++){

                if(matrix[i][j] == matrix[i-1][j-1]){
                    continue;
                }
                else{
                    flag = false;
                }

            }

        }

        return flag;
    }
};
