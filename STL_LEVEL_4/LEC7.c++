#include<bits/stdc++.h>
using namespace std;

// // // Polymorphism;


// // class Animal{
    
// //     public:
// //     void makeNoise()
// //     {
// //         cout << "Animal is making some noise" << endl;
// //     }
// // };

// // class Dog : public Animal{
    
// //     public:
// //     void makeNoise()
// //     { 
// //         cout << "Bho Bho!!" << endl;
// //     }
// // };



// // class Cat : public Animal{
    
// //     public:
// //     void makeNoise()
// //     {
// //         cout << "Meow" << endl;
// //     }
    
// // };

// // //method overriding ==> same name  ,,==>static==>>compile time 

// // int main()
// // {
// //     Animal a;
// //     Cat c;
// //     Dog d;
    
// //     a.makeNoise();
// //     c.makeNoise();
// //     d.makeNoise();
    
// // }

// // // run-time polymorshim==>>dynamic ==>> // method overloadding== same name woth diff parameters

// // int add(int a){
// //     return a+10;
// // }
// // int add(int a,int b){
// //     return a+b;   
// // }

// // int main(){
// //     cout<<add(5)<<endl;
// // }





// class JobProfile{
//     protected:
//     int salary;
    
//     public:
//     void setSalary(int s)
//     {
//         salary = s;
//     }
    
//     int getSalary()
//     {
//         return salary;
//     }
// };

// class Coder: public JobProfile{
//     public:
//     int hike = 50000;
    
//     public:
    
//     void setSalary(int s)
//     {
//         salary = s;
//     }
    
//     int getSalary()
//     {
//         return salary;
//     }
    
//     int newSalary(int bonus)
//     {
//         return salary+hike+bonus;
//     }
// };


// int main()
// {
//     Coder c;
//     cout << c.hike << endl;
    
//     c.setSalary(250000);
    
//     int s = c.getSalary();
//     cout << s << endl;
    
//     JobProfile jp;
//     // cout << jp.salary << endl;
//     jp.setSalary(200000);
//     cout << jp.getSalary() <<endl;
// }





int main()
{
    int a[4][3] = {
      {2,4,7},
      {3,6,9},
      {5,10,12},
      {14,16,18}
    };
    
    int x = 25;
    int n = sizeof(a)/sizeof(a[0]);//rows
    int m = sizeof(a[0])/sizeof(a[0][0]);//cols
    
    //row-wise binary search
    int low, mid, high, flag = 0;
    
    for(int i=0; i<n; i++)
    {
        low = 0;
        high = m-1;
        
        while(low <= high)
        {
            mid = (low + high)/2;
            
            if(a[i][mid] == x)
            {
                cout << i << " " << mid << endl;
                flag = 1;
                break;
            }
            else if(a[i][mid] < x)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        
        if(flag == 1)
        {
            break;
        }
    }
    
    return 0;
}