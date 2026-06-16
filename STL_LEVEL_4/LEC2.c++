#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  //given a binary array find the max length of subarray containing all 1s after flipping atmax k 0s to 1s.
//   int ans=0;
//   int a[]={1,0,0,1,0,1,0,1,0};
//   int k=2; 
//   int n=sizeof(a)/sizeof(a[0]);
//   int zero;
//   int start,end;
//   int subarray_len;
//   for(int i=0;i<n;i++){
//     zero=0;
//     for(int j=i;j<n;j++){
//         if(a[j]==0){
//             zero++;
//         }
//         if(zero<=k){
//             subarray_len=j-i+1;
//             if(subarray_len>ans){
//                 ans=subarray_len;
//                 start=i;
//             end=j;
//             }
            
//         }
//         else{
//             break;
//         }
//     }
//   }
//   cout<<ans<<endl;
//   cout<<start<< "   "<<end<<endl; 
// }


// // 2nd way using slinding window

// int a[]={1,0,0,1,0,1,0,1,0};
//   int k=2; 
// int start=0,end=0,ans=0,window_len=0,zero=0;
// int n=sizeof(a)/sizeof(a[0]);
// while(end<n)
// {

//     if(a[end]==0){
//         zero++;
//     }
//     while(zero>k){
//         if(a[start]==0){
//             zero--;
//         }
//         start++;
//     }
//     window_len=end-start+1;
//     ans=max(ans,window_len);
// }
// cout<<ans<<endl ;
// }

// //reverse array in groups of k 
// int a[]={1,2,3,4,5,6,7,8,9};
// int k=3;
// int start=0,end=k;
// int n=sizeof(a)/sizeof(a[0]);
// while(end<n){
//   reverse(a+start,a+end);
//   start +=k;
//   end += k;
// }
// reverse(a+start,a+end);

// for(int elem:a){
//   cout<<elem<<" ";
// }

// }

// // You have to make all the array ele as equal by performing the min nos of opertions 1operation :pick 1 elem ai and remaining n-1 ele need to done +1.
// int a[]={6,8,7};
// int n=sizeof(a)/sizeof(a[0]);
// int ops=0;
// sort(a,a+n);
// while(a[0]!=a[n-1]){
//   for(int i=0;i<n-1;i++){
//     a[i]++;
//   }
//   sort(a,a+n);
//   ops++;
// }
// }


int a[4][4]={
 
  {1,2,3,4},
  {5,6,7,8},
  {9,10,11,12},
  {13,14,15,16}
};
// // find sum of all the elements of the matrix.
//  int sum=0;
//  int rows=sizeof(a)/sizeof(a[0]);
//  int colms=sizeof(a[0])/sizeof(a[0][0]);
//  for(int i=0;i<rows;i++){
//   for(int j=0;j<colms;j++){
//     sum+=a[i][j];
//   }
//  }
//  cout<<sum;}


// // find sum of all the  main diagonal elements of the matrix.
// for(int i=0;i<rows;i++){
//   sum=sum+a[i][i];
// }

// find the sum of all the secondaray diagonal ele of the matrix
// i+j=n-1>> j=n-1-i
// for(int i=0;i<n;i++){
//   sum+=a[i][n-1-i];
// }


// #include<bits/stdc++.h>
// using namespace std;


// //1. Matrix addition --> same dimensions
// //2. Matrix Multiplication --> col1 = row2

// int main()
// {
//     int a[4][4] = {
//       {1,2,3,4},
//       {5,6,7,8},
//       {9,10,11,12},
//       {13,14,15,16}
//     };    
    
//     int b[4][4] ={
//       {1,1,1,1},
//       {1,1,1,1},
//       {1,1,1,1},
//       {1,1,1,1}
//     };
    
    
//     int r1 = sizeof(a)/sizeof(a[0]);
//     int c1 = sizeof(a[0])/sizeof(a[0][0]);
    
//     int c[r1][c1];
    
//     int r2 = sizeof(b)/sizeof(b[0]);
//     int c2 = sizeof(b[0])/sizeof(b[0][0]);
    
//     if(r1 != r2 || c1 != c2)
//     {
//         cout << "Not Possible!";
//     }
//     else
//     {
//         for(int i=0; i<r1; i++)
//         {
//             for(int j=0; j<c1; j++)
//             {
//                 c[i][j] = a[i][j] + b[i][j];
//             }
//         }
        
//         for(int i=0;i<r1;i++)
//         {
//             for(int j=0; j<c1; j++)
//             {
//                 cout << c[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
    
//     return 0;
// }

// //  Matrix multiplication 
// int a[2][4] = {
//       {1,2,3,4},
//       {5,6,7,8}
//     };    
    
//     int b[4][2] ={
//      {1,2},
//      {1,2},
//      {1,2},
//      {1,2}
//     };
    
//     // c = a*b
    
//     int r1 = sizeof(a)/sizeof(a[0]);
//     int c1 = sizeof(a[0])/sizeof(a[0][0]);
    
    
//     int r2 = sizeof(b)/sizeof(b[0]);
//     int c2 = sizeof(b[0])/sizeof(b[0][0]);
    
//     int c[r1][c2];
    
//     if(c1 != r2)
//     {
//         cout << "Not Multiplicable";
//     }
//     else
//     {
//         for(int i=0; i<r1;i++)
//         {
            
//             for(int j=0; j<c2; j++)
//             {
//                 c[i][j] = 0;
//                 for(int k=0; k<c1; k++)
//                 {
//                     c[i][j] += a[i][k]*b[k][j];
//                 }
//             }
//         }
        
//         for(int i=0; i<r1; i++)
//         {
//             for(int j=0; j<c2; j++)
//             {
//                 cout << c[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
    
//     return 0;
// }



// // find the elem 
//  int a[3][3] = {
//         {2,4,5},
//         {3,7,10},
//         {8,11,15}
//     };
    
    
//     int k = 20;
//     int flag = 0;
    
//     int n = sizeof(a)/sizeof(a[0]);
//     int m = sizeof(a[0])/sizeof(a[0][0]);
    
//     for(int i=0;i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             if(a[i][j] == k)
//             {
//                 cout << i << " " << j << endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 1)
//         {
//             break;
//         }
//     }
    
//     if(flag == 0)
//     {
//         cout << "Not found!";
//     }
    
//     return 0;
// }