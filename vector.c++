// vectort is dynamic in nature

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    // v.pop_back();
    // int n=v.size();
    // cout<< n<<endl;
    // for(int element : v){
    //     cout<< element<<endl;
    // }
    // vector<int> ::iterator it;
    // it=v.begin();
    // cout<<*it;
    // it=v.end()-1;
    // cout<<*it;

    //print the vector element using using the iterator
    
    //sort(v.begin(),v.end());// for incresing order

sort(v.rbegin(),v.rend());
 
for(auto it=v.begin();it<v.end();it++){
        cout<<  *it<<endl;
    }
    //range is find the element is present or not
auto it=find(v.begin(),v.end(),3);
if(it!=v.end()){
    cout<<"element is found";
}
else{
    cout<<"not found";
}

reverse(v.begin(),v.end());
for(int ele : v){
    cout<< ele<< endl;
}

return 0;
}
    
