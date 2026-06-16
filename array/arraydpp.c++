#include<iostream>
using namespace std;
int main(){
//     1. Reverse Array In-Place
// Problem Statement:
// Given an array of size N, reverse the array without using any extra array.
// Example:
// Input:
// N = 5
// arr = {1, 2, 3, 4, 5}
// Output:
// 5 4 3 2 1
// int a[]={1,2,3,4,5};
// int n=sizeof(a)/sizeof(a[0]);
// int left=0,right=n-1;
// while(left<right){
//     int temp=a[left];
//     a[left]=a[right];
//     a[right]=temp;

//     left++;
//     right--;
// }
// for(int elm:a){
//     cout<<elm<<" ";
// }


// 2. Left Shift Array by One Position
// Problem Statement:
// Shift all elements of an array to the left by one position.
// Example:
// Input:
// N = 5
// arr = {1, 2, 3, 4, 5}
// Output:
// 2 3 4 5 1
// int arr[]={1,2,3,4,5};
// int nn=sizeof(arr)/sizeof(arr[0]);
// int temp=arr[0];
// for(int i=0;i<nn;i++){
//     arr[i]=arr[i+1];
// }
// arr[nn-1]=temp;
// for(int le:arr){
//     cout<<le<<" ";
// }


// 3. Second Largest Element (Without Sorting)
// Problem Statement:
// Find the second largest element in an unsorted array without sorting.
// Example:
// Input:
// N = 5
// arr = {12, 35, 1, 10, 34}
// Output:
// Second Largest: 34
// int arr [] = {12, 35, 1, 10, 34};
// int max_ele=arr[0];
// int smax=arr[0];
// for(int elem:arr){
//     if(elem>max_ele){
//         smax=max_ele;
//         max_ele=elem;
//     }
//     else if(elem>smax && elem != max_ele){
//         smax=elem;
//     }
// }




// 4. Check Array is Sorted (Ascending)
// Problem Statement:
// Check whether the given array is sorted in ascending order.
// Example:
// Input:
// N = 5
// arr = {1, 2, 3, 4, 5}
// Output:
// Sorted
// int a[]={11,2,3,4,5};
// int n=sizeof(a)/sizeof(a[0]);
// bool b=false;
// for(int i=0;i<n;i++){
//     if(a[i]>a[i+1]){
//         b=true;
//         break;
//     }
// }
// if(b==false){
// cout<<"yes sorted"<<endl;
// }
// if(b==true){
//     cout<<"no"<<endl;
// }



// 5. Move All Zeroes to End
// Problem Statement:
// Move all zeroes to the end while maintaining the order of non-zero elements.
// Example:
// Input:
// N = 6
// arr = {0, 1, 9, 8, 4, 0}
// Output:
// 1 9 8 4 0 0
// int a[] = {0, 1, 9, 8, 4, 0};
// int n=sizeof(a)/sizeof(a[0]);
// int j=0;
// for(int elem:a){
//     if(elem!=0){
//         a[j]=elem;
//         j++;
//     }
// }
// for(int i=j;i<n;i++){
//     a[i]=0;
// }
// for(int elel:a){
//     cout<<elel<<" ";
// }


// 6. Find Missing Number (1 to N, One Missing)
// Problem Statement:
// Find the missing number from an array containing numbers from 1 to N with one missing.
// Example:
// Input:
// N = 5
// arr = {1, 2, 3, 5}
// Output:
// Missing Number: 4

// int a[]={1,2,3,5};
// int n=5;
// int req_sum=((n+1)*n)/2;
// int givwn_sum=0;
// for(int elem:a){
//     givwn_sum+=elem;
// }
// int missing=req_sum-givwn_sum;
// cout<<missing<<endl;



// 7. First Repeating Element (First Occurrence)
// Problem Statement:
// Find the first element that appears more than once (earliest occurrence).
// Example:
// Input:
// N = 7
// arr = {1, 5, 3, 4, 3, 5, 6}
// Output:
// First Repeating Element: 5

// int a [] = {1, 5, 3, 4, 3, 5, 6};
// int n =sizeof(a)/sizeof(a[0]);
// int flag=-1;
// int ans=-1;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(a[i]==a[j]){
//             ans=a[i];
//             flag=0;
//             break;
//         }
//     }
//     if(flag==0){
//         break;
//     }

// }
// cout<<ans<<endl;


// 8. Leader Elements in Array ********
// Problem Statement:
// Find the Leader Elements in an Array. An element is a leader if there are no greater elements on its right.
// Example:
// Input:
// N = 6
// arr = {16, 17, 4, 3, 5, 2}
// Output:
// int a[]={16, 17, 4, 3, 5, 2};
// int n=sizeof(a)/sizeof(a[0]);
// for(int i=0;i<n;i++){
//    int flag=0;
//     for(int j=i+1;j<n;j++){
//         if(a[j]>a[i]){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){ 
//         cout<<a[i]<<endl;
//     }
// }

// }


