#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
//#leader-->> an element that is grater than all the element to its right
// traveser from L to R
// without using additional space
/*int a[]={16,17,3,5,2};
int n=sizeof(a)/sizeof(a[0]);
int max_ele=a[n-1];
int right=n-2;

for(int i=n-2;i>=0;i--){
    if(a[i]>max_ele){
      a[right]=a[i];
      right--;
      max_ele=a[i];
    }
}
right++;
for(int i=right;i<n;i++){
    cout<<a[i]<<endl;
}

return 0;
}*/



/*
using additional space 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
//#leader-->> an element that is grater than all the element to its right
// traveser from L to R
int a[]={16,17,3,5,2};
int n=sizeof(a)/sizeof(a[0]);
int max_ele=a[n-1];
vector<int>leaders;
leaders.push_back(a[n-1]);

//cout<< a[n-1] <<endl;
for(int i=n-2;i>=0;i--){
    if(a[i]>max_ele){
        leaders.push_back(a[i]);
        max_ele=a[i];
    }
}
n=leaders.size();
for(int i=n-1;i>0;i--){
    cout<<leaders[i]<<endl;
}
return 0;
*/

// string s="harsh";
// //s.erase(2,3); //--->>>> 2 is the index and 3 is the length
// s.replace(1,3,"HEY"); //----->> 1 is index and 3 is the lenth which you want to replace
// cout<<s<<endl;



// string s1="malayalam";
// string s2=s1;

// reverse(s2.begin(),s2.end());
// cout<<s1<<endl<<s2<<endl;

// if(s1==s2){
//     cout<<"yes";
// }

// string s="Aditya";
// string s1=s.substr(1,3);
// string s2=s;
// reverse(s2.begin()+1,s2.begin()+4);
// reverse(s1.begin(),s1.end());
// cout<<s2<<" ";
// cout<<s1;


//Q1 >> print the number of vowells and consonants 
//string s="harsh kumar soni";
// int count_char=0;
// int vowel=0
// for(char c: s){
//     if(c>='a'&&c<='z') || (c>=A && c<='Z'){
//         count_char++;
//     }
// }
// cout<<"total char"<<count_char<<endl;
// for(char c:s){
//     if(c=='a|| c=='e'||c=='i',||c=='o'||c=='u'){
//             vowel++;
//     }
// }
// int consonant;
// consonant=count_char-vowel;



//Product of all the element of a[] except a[0]
int a[]={4,7,3,1,9};
int n=sizeof(a)/sizeof(a[0]);
int b[n];
int prod_all=1;

for(int ele:a){
    prod_all *=ele;
}
cout<<prod_all<<endl;

for(int i=0;i<n;i++){
    if(a[i]!=0){
    b[i]=prod_all/a[i];}
    
}
for(int elee : b){
    cout<<elee<<" "<<endl;
}
return 0;

}


