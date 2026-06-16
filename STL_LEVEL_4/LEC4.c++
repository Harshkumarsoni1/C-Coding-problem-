#include<bits/stdc++.h>
using namespace std;
int main(){

    // // Multimap
    // multimap<int,string>mm;
    // mm.insert({1,"H"});
    // mm.insert({1,"harsh"});
    // mm.insert({2,"akk"});
    // mm.insert({2,"riya"});
    // mm.insert({3,"yo"});
    // mm.insert({4,"oh"});

    // cout<<mm.size()<<endl;
    
    // for(auto elem :mm){
    //     cout << elem.first<<"   "<<elem.second;
    // }
    // cout<<"------------====------------------------------------------------==-----------------------------";
    // auto b=mm.begin();
    // cout<<b->first<<" "<<b->second <<endl;

    // cout<<"----------------------===----------------------===-----------====----------------------------------";
    // auto it=next(b,4);
    // cout<<it->first<<" "<<it->second<<endl;
    // it->second="harsh kr soni"; // update & modified the value in multimap 
    // cout<<it->first<<" "<<it->second;

    // for(auto i=mm.begin();i!= mm.end();i++){
    //     cout<<i->first<< " "<<i->second<<endl;
    // }

    // auto iit=mm.find(2);
    // cout<<iit->second<<endl;
    // mm.erase(2)//remove the all the key value
       
    // auto i1=mm.find(2);
    // mm.erase(i1);  remove only first occcurance of the key + value from the hashmap using the erase fuction key the parameter as the find value 


    // Spiral matrix 
    int a[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    
    vector<int> res;
    
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(a[0])/sizeof(a[0][0]);
    
    int top = 0, bottom = n-1, left = 0, right = m-1;
    
    while(top <= bottom && left <= right)
    {
        //move right direction
        for(int i=left; i<=right; i++)
        {
            res.push_back(a[top][i]);
        }
        top++;
        
        
        //move down direction
        for(int i=top; i<= bottom; i++)
        {
            res.push_back(a[i][right]);
        }
        right--;
        
        //if row is still left
        if(top <= bottom)
        {
            //move in left direction
            for(int i=right; i>= left; i--)
            {
                res.push_back(a[bottom][i]);
            }
            bottom--;
        }
        
        //if col is still left
        if(left <= right)
        {
            for(int i = bottom; i>=top; i--)
            {
                res.push_back(a[i][left]);
            }
            left++;
        }
    }
    
    for(int elem: res)
    {
        cout << elem << " ";
    }
    return 0;
}
