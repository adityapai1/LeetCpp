//use auto for loop to loop through without using its index position

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size(),false);
        
        int max1 = *max_element(candies.begin(), candies.end());
        int greatest = 0;
        for( int i = 0 ; i < candies.size(); i++){
            greatest = candies[i] + extraCandies;
            if(greatest >= max1 ){
                result[i] =true;
            }
            else{
                result[i]= false;
            }
        }
        return result;
        
    }
};

