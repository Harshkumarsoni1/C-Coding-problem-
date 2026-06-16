#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  
    return 0;



//Q1-->>Reverse a string using stack ;
//     string str="HARSH KR SONI";
//     stack<char>s;
//     for(char c:str)
// {

//     s.push(c);
// }
// char c;
// str.clear();
// while(!s.empty()){

//     c=s.top();
//     str += c;
//     s.pop();
// }
// cout<<str;



// //
//   //  Q2-->> Remove the middle element from the stack ;
// stack<int>s1;
// for(int i=1;i<8;i++){
//     s1.push(i);
//     cout<<i<<" "<<endl;
// }   
// stack<int>s2;
// int n=s1.size();
// int mid=n/2;
// cout<<mid;
// int val;
// for(int i=0;i<n;i++){
//     if(i!=mid){
//         val=s1.top();
//         s2.push(val);
//     }
//     s1.pop();
// }
// while (!s2.empty())
// {
//     val=s2.top();
//     s1.push(val);
//     s2.pop();
// }
// while(!s1.empty()){
//     cout<<"   "<<s1.top()<<" ";
//     s1.pop();
// }
// }

//
// Q3--->>> use stack to track opening and closing brackets () ;
//  int flag=0;
//  string str="(())";
//  stack<char>s;
//  for(char c:str){
//   if(c =='('){s.push(c);}
//   else if(!s.empty()){
//     s.pop();
//   }
//   else{
//     flag=1;
//     break;
//   }
//  }
//  if(flag==0 && (s.empty())){
//   cout<<"valid";}
//   else{
//     cout<<"invalid";
//   }
 
// }

///
// most freq ask question hai ye bola nahi jayega ki stack se solve karo 
    // // Q4 --->>> use stack to track opening and closing brackets for 3 symbols-->> [],(),{} ;
    // int flag = 0;
    // string str = "({})[]";
    // stack<char> s;

    // for (char c : str) {
    //     if (c == '(' || c == '[' || c == '{') {
    //         s.push(c);
    //     } else if (!s.empty() && 
    //               ((c == ')' && s.top() == '(') ||
    //                (c == '}' && s.top() == '{') ||
    //                (c == ']' && s.top() == '['))) {
    //         s.pop();
    //     } else {
    //         flag = 1;
    //         break;
    //     }
    // }

    // if (flag == 0 && s.empty()) {
    //     cout << "valid";
    // } else {
    //     cout << "invalid";
    // }

