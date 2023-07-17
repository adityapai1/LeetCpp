#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    
    vector<int> nums ={1,2,3} ;  
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    
    do{
        ans.push_back(nums);
    }while(next_permutation(nums.begin(),nums.end()));
    
    for( auto v: ans){
        for( auto i : v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}
