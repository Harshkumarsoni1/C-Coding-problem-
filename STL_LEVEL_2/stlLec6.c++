#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

// // Linear searching

// int a[]={3,5,1,7,9,2};

// int key =3;

// int flag =0,ans=1  ;

// for(int elem:a)
// {
//     if(elem==key)
//     {
//         flag=1;
//         ans=elem;
//         break;
//     }
// }

// if(flag==1)
// {
//     cout<<"element found"<<" +  "<<ans<<;
// }

// else
// {
//     cout<<"element not found";
// }
// }



// // Binary Search==>> the array is already sorted 
// int a[]={2,4,5,6,7,8,11,12};
// int n=sizeof(a)/sizeof(a[0]);
// int ans=-1,mid=0,x=4;
// int left=0,right=n-1;
// while(left<=right){
//     mid=(left+right)/2;

//     if(x==a[mid]){
//         ans=mid;
//         break;
//     }
//     else if(x<a[mid]){
//         right=mid-1;
//     }
//     else{
//         left=mid+1;
//     }
// }
// if(ans==-1){
//     cout<<"element not found";
// }
// else{
//     cout<<"element found at index"<<"+"<<mid;
// }


//  2nd way recurssion methed

// int binarySearch(vector<int> a, int left, int right, int x) {
//     if (left > right) {
//         return -1;
//     }

//     int mid = (left + right) / 2;

//     if (x == a[mid]) {
//         return mid;
//     } else if (x < a[mid]) {
//         return binarySearch(a, left, mid - 1, x);  // Search left half
//     } else {
//         return binarySearch(a, mid + 1, right, x); // Search right half
//     }
// }

// int main() {
//     vector<int> a = {2, 4, 5, 6, 7, 8, 11, 12};
//     int n = a.size();  // or use sizeof logic if using array
//     int x = 15;  // Element to search
//     int ans = binarySearch(a, 0, n - 1, x);

//     if (ans == -1) {
//         cout << "Element not found" << endl;
//     } else {
//         cout << "Element found at index: " << ans << endl;
//     }

//     return 0;
// }
// }