#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>a={5,8,3,4};
    cout<<a.front()<<" "<<a.back()<<endl;
    cout<<a.size()<<endl;

    //update the first and last element from the list;
    a.front()=10;
    a.back()=7;
    cout<<a.front()<<" "<<a.back()<<endl;
cout<<a.size()<<endl;

    //adding ele to the list
    a.push_front(2);
    a.push_back(6);
    cout<<a.front()<<" "<<a.back()<<endl;

    //use for the remove the ele from the list at first and last element 
    cout<<a.size()<<endl;
    a.pop_back();
    a.pop_front();
    cout<<a.size()<<endl;
    cout<<a.front()<<" "<<a.back()<<endl;
    cout<<a.size()<<endl;
    
    // insert 20 at posn 3rd(0-based)
    auto it=a.begin();
    advance(it,2);
    a.insert(it,3,20);//3 item add 20 
    for(int ele:a){
        cout<<ele<<endl;
    }

    a.remove(20);// remove all the occrances of the 20 from the list 

    //list<int> :: iterator it1 ;
    //use for print All the element form the list
    //for(auto it1=a.begin();it1!=a.end(),it1++)
    //{
      //  cout<<*it1<<endl;
    //}
    a.reverse();
     cout<<a.reverse()<<endl;
    return 0;
}