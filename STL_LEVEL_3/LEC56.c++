#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
//     // Priority queue to implement max and min heap 
//     // // Maxheap using Queue
//     // priority_queue<int>pq;
//     // pq.push(22);
//     // pq.push(10);
//     // pq.push(90);
//     // cout<<"Top element in heap"<<pq.top()<<endl;
//     // pq.pop();
//     // cout<<pq.top();
    

//     // Min heap using Queue

//     priority_queue<int,vector<int>,greater<int>>pq;
//     pq.push(22);
//     pq.push(10);
//     pq.push(90);
//     cout<<pq.size()<<endl;
//     cout<<pq.empty()<<endl;
//     cout<<pq.top()<<endl;
//     pq.pop();
//     cout<<pq.top();
// }




// // what is the smalllest/min sum of two numbers formed from the digits of an array
// // note>>> use all digits exactly once to from number 
// vector<int>a={3,4,5,8,6,2,9,1,7};
// int n=a.size();
// priority_queue<int,vector<int>,greater<int>>minheap;
// for(int elem:a){
//     minheap.push(elem);
// }
// int n1=0,n2=0;
// while(!minheap.empty()){
//     n1=n1*10+minheap.top();
//     minheap.pop();
//     cout<<"n1 is:"<<n1<<endl;


//     if(!minheap.empty()){
//         n2=n2*10+minheap.top();
//         minheap.pop();
//         cout<<"n2 is:"<<n2<<endl;
//     }
// }
// cout<<"sum is "<<n1+n2;
// }





// You are given an array of time intervals where every element is a

// vector of 2 elements ai: {starti, endi}.

// You have to merge all the overlapping intervals into one and output the final set of intervals that should have only the non -overlapping intervals in it.

vector<pair<int,int>>interval={{2,4},{1,5},{4,6},{7,8}};
sort(interval.begin(),interval.end());
for(auto elem:interval){
    cout<<elem.first<<"  "<<elem.second<<endl;
}
vector<pair<int,int>>mergedinterval;
pair<int,int>prevInterval=interval[0];
int n=interval.size();
for(int i=1;i<n;i++){
if(prevInterval.second>=interval[i].first){
    prevInterval.second=max(prevInterval.second,interval[i].second);
}
else{
    mergedinterval.push_back(prevInterval);
    prevInterval=interval[i];
}
}
mergedinterval.push_back(prevInterval);

cout<<"Merged interval are "<<endl;

for(auto elem:mergedinterval){
    cout<<elem.first<<"  "<<elem.second<<endl;
}
}

