#include<bits/stdc++.h>
using namespace std;
int main(){
// // /Set
// set<int>h={1,2,35,4,3};
// for(int ele:h){
//     cout<<ele<<" ";
// }
// cout<<endl;
// set<int,greater<int>>h1={1,2,35,3,4};
// for(int ele:h1){
//     cout<<ele<<" ";
// }

set<string>names={"AJ","Prince","harsh","kumar","soni"};

auto it=names.begin();
cout<<*it<<endl;
auto it1=next(it,3);
cout<<*it1<<endl;
names.insert("soniji");
set<int>num={3,5,1,7,2};
auto iit=num.find(5); 
cout<<*iit<<endl; // return the value 

}