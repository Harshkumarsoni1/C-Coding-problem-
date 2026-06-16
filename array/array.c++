#include<iostream>
using namespace std;
int main(){
    int a[]={3,4,6,8,9};
    /* this code is use for acccess the index and print the value
    int n=sizeof(a)/sizeof(a[0];)
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    */ 
   
    //this code is use for acces the element 
   for(int ele : a){
    cout<<ele<<endl;
   }
    int n=sizeof(a)/sizeof(a[0]);  // element *4 =size / ek size of array element se 
    cout<<n<<endl;
   return 0;
}