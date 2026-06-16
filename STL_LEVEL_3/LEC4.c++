#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


// /*
// Move all zeros to end of array

// Problem Statement: Given an array of integers arr[], the task is to move all the zeros to the end of the array while maintaining the relative order of all non-zero elements.

// Examples:

// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0] Output: arr[] = [1, 2, 4, 3, 5, 0, 0, 0]

// Explanation : There are three Os that are moved to the end.

// Input: arr[] = [10, 20, 30] Output: arr[] = [10, 20, 30] Explanation: No change in array as there are no Os.

// Input: arr[] = [0, 0] Output: arr[] = [0, 0] Explanation: No change in array as there are all Os.
// */

// int a[]={1,2,0,4,0,3};
// int n=sizeof(a)/sizeof(a[0]);
// int ind=0;
// for(int i=0;i<n;i++){
//     if(a[i]!=0){
//         a[ind++]=a[i];
//     }
// }
// for(int i=ind;i<n;i++){
//     a[i]=0;
// }
// for(int elem:a){
//     cout<<" "<<elem<<"  ";
// }
// }



// // Second largest element in the an Array
// int a[]={12,35,1,10,34,1};
// int n=sizeof(a)/sizeof(a[0]);
// int maxele=a[0];
// int flag=0;
// for(int ele:a){
//     maxele=max(maxele,ele);
// }
// cout<<maxele<<endl;

// int secmax=INT_MIN;
// for(int elem:a){
//     if(elem>secmax && elem<maxele){
//         flag=1;
//         secmax=elem;
//     }
// }
// if(flag==1){
//     cout<<secmax<<endl;
// }
// else{return -1;}
// }




// ********************// Maximum Subarray Sum-Kadanes algorithm;*******************************************
// int a[]={2,3,-8,7,-1,2,3};
// int n=sizeof(a)/sizeof(a[0]);
// int ans=a[0];
// int sum=0;
// for(int i=0;i<n;i++){
//     sum=0;
//     for(int j=i;j<n;j++){
//         sum=sum+a[j];
//         cout<<"sub array sum  =  "<<sum<<" "<<endl;
//         ans=max(ans,sum);

//     }
// }
// cout<<"Max sub array sum is   ===  "<<ans<<endl;
// }


// /////********* */ 2nd way Kadanes algorithm leetcode hard ************* very eff and super flexible 

int a[]={1,-2,1,-3,4,-1,2,1,-5,4};
int n=sizeof(a)/sizeof(a[0]);
int ans=a[0];
int sum=a[0];
for(int i=0;i<n;i++){
    sum=max(a[i],sum+a[i]);
    ans=max(ans,sum);
}
cout<<ans<<endl;
}