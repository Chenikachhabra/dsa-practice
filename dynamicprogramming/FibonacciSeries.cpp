#include<iostream>
#include<vector>
using namespace std;
int fabonacci(int n , vector<int> &dp){
    if(n<=1)
    return n;
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n] = fabonacci(n-1 , dp) + fabonacci(n-2 , dp);
    return dp[n];
}
int main(){
    int n = 5;
    vector<int>dp(n+1 , -1);
    cout<<"fabonacci of \t"<<n<<"is\t"<<fabonacci(n,dp);
    return 0;
}