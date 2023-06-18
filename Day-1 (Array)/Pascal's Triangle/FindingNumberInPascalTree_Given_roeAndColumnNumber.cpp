#include<iostream>

using namespace std;

int nCr(int n, int r){
    double ans = 1;                  //double is used for floating point integers
    for(int i=0;i<r;i++){
        ans = ans*(n-i);
        ans = ans/(r-i);               //Time Complexity: O(r)
        cout<<ans<<" ";                //Space Complexity: O(1)
        // cout<<(r-i)<<" "<<(i+1)<<endl;
    }
    return ans;
}

int main(){
    int n = 9;             //row number
    int r = 5;             //column number
    int ans = nCr(n-1,r-1);         //first substract 1 from n and r
    // cout<<ans;
    return 0;
}