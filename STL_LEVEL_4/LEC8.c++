// ****** // // Dynamic programming ***************
#include<bits/stdc++.h>
using namespace std;

// // Top down approach==>>
// vector<int>dp(100,-1);
// int fibo(int n)
// {
//     if(n<2){

//         return n;
// }

// if(dp[n]!=-1)
// {
//     return dp[n];
// }

// return dp[n]=fibo(n-1)+fibo(n-2);

// }


// int main(){
//     cout<<fibo(10);
// }





//  Bottom up approach
int main(){
    int x=3;
    int a[x+1];

    a[0]=0;
    a[1]=1;

    for(int i=2;i<=x;i++){
        a[i]=a[i-1]+a[i-2];
    }

    cout<<a[3];
}



// Longest commman subsequence(Lcs)==>>
