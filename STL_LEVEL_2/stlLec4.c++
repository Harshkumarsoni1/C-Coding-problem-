#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// find the sum of the element until it will single digit
// ex> 1234 =1+2+3+4=10=>1+0=>1(o/p)
int main(){
    // int a=12;
    // int sum=0;
//     while(a>0){
//         sum+=a%10;
//         a=a/10;
//     }
//     cout<<sum<<endl;
//     int n =sum;
//     int newsum=0;
//     if(n>=10){
//     while(n>0){
//         newsum+=n%10;
//         n=n/10;
//     }
//     cout<<newsum;
// }


//  2nd Way====>>>> best

// while(sum>9||a>0){
//     if(a==0){        
//         a=sum;
//         sum=0;
//     }
//     sum+=a%10;
//     a/=10;
// }
// cout<<sum<<endl;
// }


//  find smallest missing +ve number
int a[]={7,1,-3,4,2,1};
int n=sizeof(a)/sizeof(a[0]);
// sort(a,a+n);
// int ans=1;
// for(int i=0;i<n;i++)
// {

// if(a[i]==ans)
// {
//     ans++;
// }
// else if(a[i]>ans){
//     break;
// }
// }
// cout<<ans;
// }


// //2nd way=>> better way // using element as index
// int temp[n];int missing=1;
// for(int i=0;i<n;i++){
//     temp[i]=0;
// }
// for(int i=0;i<n;i++){
//     if(a[i]>0&& a[i]<=n){
//         temp[a[i]-1]=1;
//     }
// }

// for(int i=0;i<n;i++){
//     if(temp[i]==0){
//         missing =i+1;
//         break;
//     }
// }
// cout<<missing;



// TWO POINTER TECHNIQUE==>>>

}