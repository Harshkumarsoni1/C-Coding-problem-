#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // //  Find the pair
    // int a[]={2,5,7,8,10,12,15};
    // int n=sizeof(a)/sizeof(a[0]);
    // int left=0;int right=n-1;
    // int sum=0;
    // int target=17;
    // int flag=0;
    // vector<pair<int,int>>ans;
    // pair<int,int>p;
    // while(left<right){
    //     sum=a[left]+a[right];
    //     if(sum<target){
    //         left++;

    //     }
    //     else if(sum>target){
    //         right--;
    //     }
    //     else{
    //         p={a[left],a[right]};
    //         ans.push_back(p);
    //         left++;
    //         right--;

    //         // cout<<a[left]<<"+"<<a[right]<<endl;
    //         // flag=1;
    //         // left++;
    //         // right--;

    //         // // break;
    //     }
    // }
    // int a1,b1;
    // for(auto elem:ans){
    //     tie(a1,b1)=elem;
    //     cout<<"("<<a1<<","<<b1<<")"<<endl;
    // }
    // // if(flag==0){
    // //     cout<<"no pair exist";
    // // }
    // // if(flag==1){
    // //     cout<<"pair exist"
    // // ;}

    // // Merge Sort()===>> >> *******
    // int a[] = {2, 3, 9};
    // int b[] = {4, 5, 10};
    // int n = sizeof(a) / sizeof(a[0]);
    // int m = sizeof(b) / sizeof(b[0]);
    // int i = 0, j = 0;
    // vector<int> c;
    // while (i < n && j < m)
    // {
    //     if (a[i] < b[j])
    //     {
    //         c.push_back(a[i]);
    //         i++;
    //     }
    //     else
    //     {
    //         c.push_back(b[j]);
    //         j++;
    //     }
    // }
    // while (i < n)
    // {
    //     c.push_back(a[i]);
    //     i++;
    // }
    // while (j < m)
    // {
    //     c.push_back(b[j]);
    //     j++;
    // }
    // for (int lem : c)
    // {
    //     cout << lem << " ";
    // }

    // Given an array prices() of length N, representing the prices of the stocks on different days,
    // the task is to find the maximum profit possible by buying and selling the stocks on different
    // days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell.

    // 3 Note: Stock must be bought before being sold.

    // Examples:

    // 2 Input: prices[] = {7, 10, 1, 3, 6, 9, 2}

    // 3 Output: 8

    // 4 Explanation: Buy for price 1 and sell for price 9.

    // 5

    // Input: prices[] = 7, 6, 4, 3, 1}

    // B Output: 0

    // // Explanation: Since the array is sorted in decreasing order,can be made without making any transaction.


    // int a[]={8,10,8,4,2,1};
    // int profit=0;
    // int n=sizeof(a)/sizeof(a[0]);
    // int minvalue =a[0];
    // for(int i=1;i<n;i++){
    //     minvalue=min(minvalue,a[i]);
    //     profit=max(profit,a[i]-minvalue);
    // }
    // cout<<profit<<endl;





    // Q2nd variant -->>
    int a[]={100,180,260,310,40,535,695};
    int n=sizeof(a)/sizeof(a[0]);
    int profit=0;
    for(int i=0;i<n;i++){
        profit+=max(0,a[i+1]-a[i]);
        
    }
    cout<<profit;
}