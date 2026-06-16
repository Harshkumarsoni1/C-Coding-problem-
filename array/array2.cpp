#include<iostream>
using namespace std;
int main()
{
//     //find the max element in the array
   int a[]={3,5,-10,6,8};
//   float max=0;
  int n=sizeof(a)/sizeof(a[0]);
//   for(int i=0;i<n;i++){
//     if(a[i]>max){
//         max=a[i];
//     }
    
//   }
//   cout<<"max "<< max<<endl;
//   return 0;
  

//==>>./.   secend approach
// int max_ele=a[0];
// for(int curr_ele :a)
// {
//     if (curr_ele>max_ele){
//         max_ele=curr_ele;
//     }
// }
// cout<<max_ele;
// return 0;

// interview>> print the array ele in reveser order do this using an incrementing loop and alse without any temporary array;

for(int i=0;i<n;i++){
cout<<a[n-1-i]<<endl;
}
}
