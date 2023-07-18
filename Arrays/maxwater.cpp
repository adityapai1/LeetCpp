class Solution {
public:
    int maxArea(vector<int>& height) {
     int maxim =0;   
     int left = 0;
     int right = height.size()-1;

     while(left< right ){

        int cArea = min(height[left],height[right])*(right-left);
        maxim = max(maxim, cArea);

        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
     }
     return maxim;
    }
};                                

//important question̨̨
