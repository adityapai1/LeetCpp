#include <bits/stdc++.h> 

bool fun( int n , int k ,vector<int> &arr ,vector<vector<int>> &dp ){

    if(k == 0 ) return true;

    if(n ==0 && arr[0] == k) return true;

    bool pick = false;
    bool not_pick;

    if(dp[n][k] != -1){
        return dp[n][k];
    } 

    if( k >= arr[n] ){

       pick = fun( n-1, k-arr[n] , arr ,dp );
    }

       not_pick = fun( n, k , arr ,dp);

    return dp[n][k] = pick || not_pick;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp (n, vector<int> (k+1,-1));

    return  fun(n-1,k , arr , dp);

   
    
}

//incorrect code
