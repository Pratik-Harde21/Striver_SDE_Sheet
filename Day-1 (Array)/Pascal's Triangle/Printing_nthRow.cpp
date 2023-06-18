// //Brute-Force Approach
// #include<iostream>

// using namespace std;

// int nCr(int n, int r){
//     double ans = 1;
//     for(int i=0;i<r;i++){
//         ans = ans * (n-i);
//         ans = ans/(r-i);
//     }
//     return ans;
// }

// int main(){
//     int k = 4;
//     for(int i=0;i<k;i++){
//         cout<<nCr(k-1,i+1-1)<<" ";             //+1 is for position and -1 is for formula to find that pos number
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

void pascalTriangle(int n){
    double ans = 1;
    cout<<ans<<" ";
    for(int i=1;i<n;i++){
        ans = ans*(n-i);
        ans = ans/i;
        cout<<ans<<" ";
    }
}

int main(){
    int n = 5;
    pascalTriangle(n);
    return 0;
}