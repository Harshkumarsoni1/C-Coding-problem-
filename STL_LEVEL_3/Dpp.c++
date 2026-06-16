#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Most impratant and hard leetcode problem plz repeat all idea and apply to solve 
int main() {
// // min ya max wale questions me binary search apply hota hai approximation hai 90%
// Recent,Nearest ke liye Stack aata hai 


// //*********/  // Find the min window substring in s that contains all characters of t .  // Leetcode hard ➕➕➕🔥🔥🔥🔥
// // bool check(string a, string b) {
// //     int freq[26] = {0};

// //     for (char c : b)
// //         freq[c - 'A']++;

// //     for (char c : a)
// //         freq[c - 'A']--;

// //     for (int i = 0; i < 26; i++) {
// //         if (freq[i] > 0)
// //             return false;
// //     }
// //     return true;
// // }

// // int main() {
// //     string s = "ADOBECODEBANC";
// //     string t = "BAN";
// //     string subs = "";
// //     bool flag = false;
// //     int ans = INT_MAX;
// //     int curr_len = 0;
// //     string req_sub = "";
// //     int n = s.size();

// //     for (int i = 0; i < n; i++) {
// //         for (int j = i; j < n; j++) {
// //             subs = s.substr(i, j - i + 1);
// //             curr_len = subs.size();
// //             flag = check(subs, t);
// //             if (flag) {
// //                 if (curr_len < ans) {
// //                     req_sub = subs;
// //                     ans = curr_len;
// //                 }
// //             }
// //         }
// //     }

// //     cout << "Minimum window substring: " << req_sub << endl;
// //     return 0;
// // }


// // // find the min nos of railway platforms needed given train arrival and departure times 

// // int arr[]={900,940,950,1100,1500,1800};
// // int dep[]={910,1200,1120,1130,1900,2000};
// // int ans=0,platform;
// // int n=sizeof(arr)/sizeof(arr[0]);

// // for(int i=0;i<n;i++){
// //    platform=1;
// //   for(int j=i+1;i<n;j++){
// //    if(arr[i]<=arr[j]&&dep[i]>=arr[j]){
// //       platorm++;
// //    }
// //   } 
// //   ans=max(ans,platform);
// // }
// // cout<<"Number of platform needed<<ans<<endl;
// // }
   

// // 2nd way eff O(n2)
//  int platform_count = 0;  // Currently needed platforms
//     int ans = 0;             // Final answer: max platforms needed
//     int i = 0, j = 0;   
// int arr[] = {900, 940, 950, 1100, 1500, 1800};

// int dep [] = {910, 1200, 1120, 1130, 1900, 2000};
// int n = sizeof(arr) / sizeof(arr[0]);

// sort(arr, arr+n);

// sort(dep, dep+n);

// //loop over arrival to fill the platform

// for(int i=0; i<n; i++){

// //loop over dept to empty the platform

// while( j<n && dep[j] < arr[i]){

// platform_count--;

// j++;
// }
// platform_count++;
// ans = max(ans, platform_count);
// }
// cout<<ans;
// }


//  find the next greater ele foreach elem in a circular array

// int a[]={1,3,2,4};
// int res[]={-1,-1,-1,-1};
// int n=sizeof(a)/sizeof(a[0]);
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(a[i]<a[j%n]){
//             res[i]=a[j%n];
//             break;
//         }
//     }
// }
// for(auto ele:res){
//     cout<<ele<<endl;
// }

// 2nd eff way to solve the question 

int a[]={1,4,2,117,9,12};
int n=sizeof(a)/sizeof(a[0]);
int res[n];
stack<int>s;
for(int i=n-1;i>=0;i++){
    while(!s.empty()&& s.top()<a[i]){
        s.pop();
    }
    if(s.empty()){
        res[i]=-1;
    }
    else{
        res[i]=s.top();
    }
    s.push(a[i]);
}
cout<<"new"<<endl;
for(auto ele: res){
    cout<<ele<<" ";
}
}