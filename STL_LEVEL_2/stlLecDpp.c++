#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // // Longest consecutive seq in an array 
    // int a[]={4,6,8,5,2,1,7};
    // int n=sizeof(a)/sizeof(a[0]);
    // sort(a,a+n);
    // int streak_end=a[0];
    // int ans=1;
    // int count=1;
    // for(int i=1;i<n;i++){
    //     if(a[i]==a[i-1]+1){
    //         count++;
    //     }
    //     else{
    //         count=1;
    //     }

    //     if(count>ans){
    //         streak_end=a[i];
    //         ans=count;
    //     }
        
        
    // }
    // // cout<<streak_end<<end;
    // cout<<ans<<endl;

    // int streak_start=streak_end-ans+1;
    // for(int i=streak_start;i<=streak_end;i++){
    //     cout<<i<<" ";
    // }


//     // Reverse Words in String 
//     string ip="the sky is blue";
//     ip=ip+" ";
//     string word="";
//     string ans="";
//     int n=ip.size();
//     for(int i=0;i<n;i++){
//         if(ip[i]!=' '){
//             word+=ip[i];
//         }
//         else{
//             ans=word+ans;
//             if(i!=n-1){
//                 ans=" "+ans;
//             }
//             cout<<ans<<endl;
//             word= "";
//         }
//     }
//     cout<<ans;
// }



// // Remove duplicates from Sorted Array
// int a[]={1,1,2};
// int j=1;
// int n=sizeof(a)/sizeof(a[0]);
// for(int i=1;i<n;i++){
//     if(a[i]!=a[i-1]){
//         a[j]=a[i]; // store the unique element 
//         j++;
//     }
    
// }
// cout<<j<<endl;
// cout<<"elements are";
// for(int i=0;i<j;i++){
//     cout<<a[i]<<endl;
// }
// }



// //  find the first unique character;
// string ip="aditya";
// int freq[26];
// for(int i=0;i<26;i++){
//     freq[i]=0;
// }
// for(char c :ip){
//     freq[c-'a']++;
// }
// int ans=-1;
// int n=ip.size();
// for(int i=0;i<n;i++){
//     if(freq[ip[i]-'a']==1){
//         ans=i;
//         break;
//     }
// }
// cout<<ans;
// }



// // Rotate AN Array; [rotate the array to tha right by k steps]
// int a[]={1,2,3,4,5,6,7};
// int k=3;
// int n=sizeof(a)/sizeof(a[0]);
// reverse(a,a+n);  //[7,6,5,4,3,2,1]
// reverse(a,a+k);  //[5,6,7,4,3,2,1]
// reverse(a+k,a+n);  //[5,6,7,1,2,3,4]
// for(int elem :a){
//     cout<<elem<<endl;
// }
// }


// // Merge two Sorted arrays  
//     int a[] = {1, 2, 3, 0, 0, 0};  // a has size 6, but only first 3 elements are valid
//     int b[] = {2, 5, 6};           // b has size 3

//     int k = sizeof(a) / sizeof(a[0]);  // total size of a (6)
//     int m = sizeof(b) / sizeof(b[0]);  // size of b (3)
//     int n = k - m;                     // number of valid elements in a (3)

//     int i = n - 1; // last valid index in a
//     int j = m - 1; // last index in b

//     // Merge from the end
//     while (j >= 0) {
//         if (i >= 0 && a[i] > b[j]) {
//             a[--k] = a[i--];
//         } else {
//             a[--k] = b[j--];
//         }
//     }

//     // Print merged array
//     for (int elem : a) {
//         cout << elem << " ";
//     }

//     return 0;
// }


// Check if a strig is valid Anagram
string a="anagram";
string b="naaarmar";
int freq[26];
for(int i=0;i<26;i++){
    freq[i]=0;
}
for(char c :a){
    freq[c-'a']++;
}
for(char c:b){
    freq[c-'a']--;
}
for(int elem :freq){
    if(elem!=0){
        cout<<"not an anagram";
        break;
    }
    else if(elem==0){
        cout<<"Anagram";
        break;
    }
}


}