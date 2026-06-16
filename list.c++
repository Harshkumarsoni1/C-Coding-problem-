#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    int a[2][3]={
//     {4,5,2}, // they  have 2 row index>> 0 or 1;
//     {6,8,7}
// };
//     //a[0][2]=11; // updata value in the 2d array

//     //cout<<a[0][2]<<" ";
//     int n=sizeof(a)/sizeof(a[0]);//for row
//     int m=sizeof(a[0])/sizeof(a[0][0]);// for colm

//         cout<<n<<" "<<m<<endl;
//         cout<<"number of element="<<n*m<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<"\t";
//         }
//         cout<<endl;
//     }

    //give an array of int find the max deiifffrenece b/w two numbers
     int a[]= {2,3,4,5,8,1,10};
     int max_diff=0;
     for(int x: a){
        for(int y :a){
            max_diff=max(x-y,max_diff);
        }
     }
     cout<<max_diff<<endl;
     

     // 2nd approach 
     int maxele=a[0];
     int minele=a[0];
     for(int z:a){
        minele=min (minele,z);
        maxele=max(maxele,z);

     }
     int maxx=maxele-minele;

     cout<< maxx<<endl;


     //give an array of int find the max deiifffrenece b/w two numbers a[j]-a[i] such that j>i;;
     int n=sizeof(a)/sizeof(a[0]);
     int max_difff=a[1]-a[0];
    
    for(int j=1;j<n;j++){
      for(int i=0;i<j;i++){
         max_difff=max(max_difff,a[j]-a[i]);

      }
    } 
    cout<<max_difff<<endl;

    // Approach 2 ===>>>
    int minelee=a[0];
    int maxdiff=a[1]-a[0];
    for(int i=1;i<n;i++){
      maxdiff=max(maxdiff,a[i]-minelee);
      minelee=min(minelee,a[i]);

    }
    cout<<maxdiff<<endl;
return 0;
} 

