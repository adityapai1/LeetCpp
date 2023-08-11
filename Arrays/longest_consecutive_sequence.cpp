class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int current = 0;
        int count = 1;
        for(int i = 0 ; i < nums.size(); i++){

            if(nums[i+1]-nums[i]==1){
                count++;
                
            }
            else{
                
                if(current<count){
                    current = count;
                }

                count = 1;
            }
        }

        return current;
    }
};
