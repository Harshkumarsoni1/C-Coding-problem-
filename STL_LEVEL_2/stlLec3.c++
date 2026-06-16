#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
// given N ele array are from 1 to N only ,there 1 ele is missing and 1 element is repeated twice find the repeating and misssing ele ?? 
// int n =5; 
// int duplicate=-1;

// int a[]={2,1,5,3,5};



// with sorting 1st method
//sort(a,a+n);
// for(int i=0;i<n;i++)
// {
//     if(a[i]==a[i+1]){
//         duplicate=a[i];
//         break;
//     }
// }



// without sorting 2nd method;
// for(int i=0;i<n;i++)
// {
//     for(int j=i+1;j<n;j++){

//     if(a[i]==a[j]){
//         duplicate=a[i];
//         break;
//     }}
// }
// int sum=0;
// for(int ele:a){
//     sum+=ele;
// }
// int ideal_sum=(n*(n+1))/2;
// int missing_ele=(ideal_sum-sum)+ duplicate;
// cout<<duplicate<<endl;
// cout<<missing_ele<<endl;
// }


// 3rd way very efficient code 
// int n=3;

// int a[]={2,1,2};

// int duplicate=-1,missing=-1;

// int elem;

// for(int i=0;i<n;i++)
// {

//     elem=abs(a[i]);

//     if(a[elem-1]>0)
//     {
//         a[elem-1]=-1*a[elem-1];
//     }

//     else
//     {
//         duplicate=elem;
//     }

// }
// for(int i=0;i<n;i++){

//     if(a[i]>0)
//     {
//         missing=i+1;
        
//         break;

//     }
// }
// cout<<duplicate<<endl;

// cout<<missing<<endl;

// }


// Pair----->>>>

// pair<int,string>p1={21,"Harsh"};
// p1.second="HARSH KUMAR SONI";
// cout<<p1.first<<" "<<p1.second<<endl;
// }

/*
while comparing pairs we will compare 1st value if Tie then we well move to 2nd value 
*/

// pair<int,int> p1={2,4};
// pair<int,int> p2={2,6};
// pair<int,int> p3={1,4};
// cout<<(p1==p2)<<endl;
// cout<<(p1==p3)<<endl;
// cout<<(p1 !=p2)<<endl;}



int a[]={1,2,3};
int n=sizeof(a)/sizeof(a[0]);
int count0=0;
for(int elem:a){
    if(elem==0){
        count0++;
    }
}
if(count0==0){
    int pro=1;
    for(int elem:a){
        if(elem!=0){
            pro*=elem;
        }
    }
    for(int i=0;i<n;i++){
        a[i]=pro/a[i];
    }
}
else if(count0==1){
    int pro_rem=1;
    for(int elem:a){
        if(elem!=0){
            pro_rem*=elem;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=pro_rem;
        }
        else{
            a[i]=0;
        }
    }
}
 else 
 {
    for(int i=0;i<n;i++){
        a[i]=0;
    }
 }   

 for(int elme:a){
    cout<<elme<<" "<<endl;
 }
}
