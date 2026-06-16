// Q1->> find the square root of the given nos without using the pre defined function  , if not a perfect square retuen the largest int smaller than its Sq Root 
#include<bits/stdc++.h>
using namespace std;
int main(){
//    int n=64;
//    int i=1;
//    while(i*i<=n){
//     i++;
//    }
//    cout<<"answer is "<<i-1<<endl;
//    return 0;
// }




// (2nd)second optimize answer using binary search

// int n=64;
// int low=1;
// int high=n;
// int mid;
// while(low<=high){
//     mid=(low+high)/2;
//     if(mid*mid<=n){
//         ans=mid;
//         low=mid+1;//keep exploring right 
//     }
//     else{
//         high=mid-1;//explore left
//     }
// }

//INTERVIEW Q-2-->> split aaray into 3 equal parts in contiguous non empty segments with eual sum basically return an array [i,j] such,.if not possible return [-1,-1];

// //brute force approach App1==>..
// #include<bits/stdc++.h>
// using namespace std;
// int findsum(vector<int>a,int s, int e){
//     int sum=0;
//     for(int i=s;i<=e;i++){
//         sum+=a[i];
//     }
//     return sum;
// }
// int main(){

//     vector<int>a={1,3,4,0,4};
//     int n=a.size();
//     int ans[2]={-1,-1};
//     for(int i=0;i<n-3;i++){
//         for(int j=i+1;j<n-2;j++){
//            int sum1=findsum(a,0,i);
//            int sum2=findsum(a,i+1,j);
//            int sum3=findsum(a,j+1,n-1);
//             if((sum1==sum2) && (sum2=sum3)){
//                 ans[0]=i;
//                 ans[1]=j;
//                 break;
//             }
//         }
//     }
//     cout<<ans[0]<<"  "<<ans[1];
// }

// 2nd way efficient way 

vector<int>a={1,3,4,0,4,1};
int n=a.size();
int ans[2]={-1,-1};
int total=0;
for(int ele:a){
    total +=ele;
}
if(total%3==0){
    int sum=0;
    int c=0;
 
for(int i=0;i<=n-2;i++){
    sum +=a[i];
    if(sum==total/3){
        ans[c]=i;
        c++;
        sum=0;
        if(c==2){
            break;
        }
    }
}
 }

}
 

// //STACK------>>>>>>>>>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<int>s; //s is the stack of integer
//     s.push(5);
//     s.push(10);
//     s.push(20);
//     cout<<"top ele"<<" "<<s.top()<<endl;
//     s.pop();
//     cout<<"top ele after pop"<<" "<<s.top()<<endl;
//     s.top()=30;  // we can change the value of the top not add 30 into the stack
//     cout<<s.top()<<endl;
//     s.size(); //check the number of value present into the stack
//     if(s.empty()){
//         cout<<"Stack is empty ";
//     } else{
//         cout<<"Stack is not empty";
//     }
    
//     return 0;
// }

