#include<bits/stdc++.h>
using namespace std;

//////  // Deque //double ended queue
int main(){
    // deque<int>dq;
    // dq.push_back(10);
    // dq.push_front(5);
    // for(int ek:dq){
    //     cout<<ek<<" ";
    // }
    // dq.pop_back();
    // for(int ek:dq){
    //     cout<<ek<<" ";
    // }

/*
// Missing ranges of numbers

// Problem Statement: You have an inclusive interval [lower, upper] and 
//  a sorted array of unique integers arr[], all of which lie within this interval.
// A number x is considered missing if x is in the range [lower, upper] but not present in arr.
//  Your task is to return the smallest set of sorted ranges that includes all missing numbers, ensuring no element from arr is within any range,
//   and every missing number is covered exactly once.
// Examples
// Input: arr[] = [14, 15, 20, 30, 31, 45], lower = 10, upper = 50 Output: [[10, 13], [16, 19], [21, 29], [32, 44], [46, 50]] Explanation: These ranges represent all missing numbers between 10 and 50 not present in the array

// Input: arr[] = [-48, -10, -6, -4, 0, 4, 17], lower = -54, upper = 17 Output: [[-54, -49], [-47, -11], [-9, -7], [-5, -5], [-3, -1], [1, 3], [5,16]] Explanation: These ranges represent all missing numbers between -54 and 17 not present in the array.
// */
// int a[]={14, 15, 20, 30, 31, 45};
// int lower = 10, upper = 50;
// int n=sizeof(a)/sizeof(a[0]);
// vector<vector<int>>ans;
// if(lower<a[0]){
//     ans.push_back({lower,a[0]-1});
// }
// for(int i=0;i<n;i++){
//     if(a[i+1]>a[i]+1){
//         ans.push_back({a[i]+1,a[i+1]-1});
//     }
// }
// if(upper>a[n-1]){
//     ans.push_back({a[n-1]+1,upper});
// }
// for(auto ee:ans){
//     cout<<"["<<ee[0]<<" "<<ee[1]<<"]";
// }
// }

/*
Rearrange Array Elements by Sign

Problem Statement: Given an array arr[] of size n, the task is to rearrange it in an alternate positive and negative manner without changing the relative order of positive and negative numbers. In case of extra positive/negative numbers, they appear at the end of the array.

Note: The rearranged array should start with a positive number, and 0 (zero) should be considered as a positive number.

Examples:

Input: arr[] = [1, 2, 3, -4, -1, 4] Output: arr[] = [1, -4, 2, -1, 3, 4]

Input: arr[] = [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8] Output: arr[] = [5, -5, 2, -2, 4, -8, 7, 1, 8, 0]

*/
int a[]={1,2,3,-4,-1,4};
vector<int> pos,neg;
for(int ele :a){
    if(ele<0){
        neg.push_back(ele);
    }
    else{
        pos.push_back(ele);
    }
}
int n1=pos.size(),n2=neg.size();
int p=0,n=0;
int ind=0;
while(p<n1&&n<n2){
    if(ind%2==0){
        a[ind]=pos[p++];
    }
    else{
        a[ind]=neg[n++];
    }
    ind++;
}

while(p<n1){
    a[ind++]=pos[p++];
}
while(n<n2){
    a[ind++]=neg[n++];
}
for (int ele:a){
    cout<<ele<<" ";
}
}