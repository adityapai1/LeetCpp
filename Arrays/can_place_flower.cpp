class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool flag = false;

        for(int i = 0 ; i < flowerbed.size(); i++){

            if(flowerbed[i] == 1){
                continue;
            }
            else{
                if(flowerbed[i+1]==0 && flowerbed[i+2]==0  ){
                    flowerbed[i+1]= 1;
                    n--;
                    if(n == 0 ){
                        flag = true;
                        break;
                    }
                }
            }
        }
        
        return flag;
    }
};
