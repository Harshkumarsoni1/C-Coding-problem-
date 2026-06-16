#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// int main(){

// // // you are given an array containing only 0,1,2 in some order
// // // you can have to  rearrange the same array such that all 0s are followed by all 1s in which are followed by all 2s
// int a[]={1,0,2,2,1,0,0,1,2,1};
// int n=sizeof(a)/sizeof(a[0]);
// int i,j,k;
// int b[n];
// for(int i=0;i<n;i++){
//     b[i]=-1;
// }
// for(int i=0;i<n;i++){
//     cout<<b[i]<<endl;
// }
// i=0;
// j=n-1;
// for(k=0;k<n;k++){
//     if(a[k]==0){
//         b[i++]=0;
//     }
//     else{
//         if(a[k]==2){
//            b[j--]=2;
// }
// }
// }
// for(k=0;k<n;k++){
//     if(b[k]==-1){
//         b[k]=1;
//     }
// }

// for(k=0;k<n;k++){
// a[k]=b[k];
// }
// for(int ele:a){
//     cout<<ele<<" "<<endl;
// }


//  Approch 2_--->>
// int c0=0;
// int c1=0;
// int c2=0;
// int i;
// for(i=0;i<n;i++){
//     if(a[i]==0){
//         c0++;
//     }
//     else if(a[i]==1){
//         c1++;
//     }
//     else{
//         if(a[i]==2){
//             c2++;
//         }
//     }
// }
// cout<<c0<<" "<<c1<<" "<<c2;
// cout<<"   "<<endl;
// i=0;
// while(c0!=0){
//     a[i]=0;
//     i++;
//     c0--;
// }
// while(c1!=0){
//     a[i]=1;
//     i++;
//     c1--;
// }while(c2!=0){
//     a[i]=2;
//     i++;
//     c2--;
// }

// for(int elem : a){
//     cout<<elem<<" "<<endl;
// }

// }


// STRING >>>>>>>>>>>>>>

int main(){
    string s1="HARSH";
    cout<<s1[0]<<endl; 
    string s2="soni";
    string name=s1 +" "+ s2;  // append the string 
    cout<<name<<endl;
    s1.append(" ");
    s1.append(s2);
    cout<<s1<<endl;
    string s="kr";
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s.empty()<<endl;
    string a=" ";
    cout<<a.empty()<<endl;  //0 means false 1 means true

    name="harsh kumar soni";
    string sub=name.substr(0,4);//--->>substr(start index ,number of character which you want ,,not a index);
    cout<<sub<<endl;
    int position=name.find("k");//---->> follow the index and give you firsr position where are the present 
    cout<<position<<endl;
    string firstName,lastName;
    int space=name.find(" ");
    cout<<space<<endl;
    firstName=name.substr(0,5);
    cout<<firstName<<endl;
    lastName=name.substr(space+1);
    cout<<lastName<<endl;

    string email="harshkumarsoni121@gmail.com";
    string domain=email.substr(email.find("@")+1);
    cout<<domain<<endl;

    

    return 0;
}

