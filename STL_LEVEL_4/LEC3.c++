#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // // // Maps 
    // // map<int,string>m={{1,"A"},{2,"B"},{3,"C"}};
    // // cout<<m[1];
    // // m[2]="D";
    // // m[5]="B"; //update and add the value insert the key value pair  
    // // m.erase(2);
    // // m.clear();
    // // m.size();
    // //    m.count(2);  find the exist if yes retuen 1 
    // //  for(auto elem :m){
    // //     cout<<elem.first<<" "<<elem.second<<endl;
    // //  }

    // //  Reverse order me print karna
    // map<int,string,greater<int>>a={{11,"A"},{22,"B"},{4,"C"}};
    // for(auto elem:a){
    //     cout<<elem.first <<"    "<<elem.second;
    // }

       
    
    map<int, string> m = {
        {3, "A"},
        {5, "B"},
        {7, "C"},
        {10, "D"},
        {12, "E"}
    };

    auto it = m.lower_bound(7); // >= 7
    cout << it->first << " " << it->second << endl;

    auto it1 = m.upper_bound(10); // > 10
    cout << it1->first << " " << it1->second << endl;

    auto it2 = m.lower_bound(6); // >= 6
    cout << it2->first << " " << it2->second << endl;

    auto it3 = m.upper_bound(6); // > 6
    cout << it3->first << " " << it3->second << endl;

    cout << "Number of elements less than 6: " 
         << distance(m.begin(), it2) << endl;

    cout << "Number of elements greater than 6: " 
         << distance(it3, m.end()) << endl;

        }