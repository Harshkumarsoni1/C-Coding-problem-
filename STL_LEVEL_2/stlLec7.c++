#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
//     //  Given a sorted array with duplicates you need to find the index of the first occurance of the given number if it is present ,else return -1;
//     int a[]={2,4,4,5,5,5,5,5,5,5,5,6,7,7,7,8};
//     int x=5;
//     int ans =-1;
//     int n=sizeof(a)/sizeof(a[0]);
//     int left=0,right=n-1;
//     while(left<=right){
//         int mid=(left+right)/2;
//         if(x==a[mid]){
//             ans=mid;
//             left=mid+1; // use for find the Last occuancess if the element index 

//             // right=mid-1; // use for find the first oouracnces;
//         }
//         else if(x>a[mid]){
//             left=mid+1;
//         }
//         else{
//             right=mid-1;
//         }
//     }
//     cout<<ans;
// }




// // Given an array with all distinct elements you have to find the peak ele ,
// // in the input array ,first few elements are in increasing order and remaining ele are in decreasing order
// //,is grateer than all the elemants on its left and is lesser than all the elem on its right 

// int a[]={2,3,5,6,8,4,5};
// int n=sizeof(a)/sizeof(a[0]);
// int ans=-1;
// if(n==1){
//     ans=0;
// }
// else if(a[0]>a[1]){
//     ans=0;
// }
// else if(a[n-1]>a[n-2]){
//     ans=n-1;
// }
// else{
//   int  left=1 ,right=n-2;
//   while(left<=right){
//     int mid=(left+right)/2;
//     if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
//         ans=mid;
//         break;
//     }
//     else if(a[mid]>a[mid-1]){
//         left=mid+1;
//     }
//     else{
//         right=mid-1;
//     }
//   }
// }
// cout<<ans;
// }


//  Given an integer array find the max product of triple in the array 
int a[]={10,3,5,6,20};
// Output==1200 (element 20,6,10)
int maxPro=INT_MIN;
int product=-1;
int n=sizeof(a)/sizeof(a[0]);
sort(a,a+n);
int pro1=a[n-3]*a[n-2]*a[n-1];
int pro2=a[0]*a[1]*a[n-1];
maxPro=max(pro1,pro2);
cout<<maxPro;
}