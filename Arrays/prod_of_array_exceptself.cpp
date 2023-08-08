class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> right(nums.size());
        vector<int> left(nums.size());

        left[0]= 1; // for left array

        for(int i = 1; i<nums.size();i++){

            left[i]= left[i-1]*nums[i-1];
        }

        right[nums.size()-1]= 1;
        for(int i = nums.size()-2; i>=0;i--){

            right[i]=right[i+1]*nums[i+1];
        }

        vector<int> result(nums.size());
        for(int i = 0 ;i < nums.size(); i++){

            result[i]= left[i]*right[i];

        }

        return result;
            
        
    }
};
