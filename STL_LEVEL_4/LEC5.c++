#include<bits/stdc++.h>
using namespace std;
// class car {
//     public:
//     string brand;
//     int speed;
//     string type;
//     string color;
//     // constructor==>>>
//      car(string b,string t,string c,int s){
//         brand=b;
//         type=t;
//         color=c;
//         speed=s;
//      }
// };

// int main(){
//     car c1("HKS","Manual","black",160);
//     cout<<c1.brand<<"    "<<c1.speed;
// }



class Car {
    private:
    //features or attributes
    string brand;
    string type;
    string color;
    int seats;
    
    public:
    
    Car()
    {
        cout << "Car is created!" << endl;
    }
    void setFeatures(string b, string t, string c, int s)
    {
        brand = b;
        type = t;
        color = c;
        seats = s;
    }
    
    string getBrand()
    {
        return brand;
    }
    
    string getColor()
    {
        return color;
    }
    
    int getSeats()
    {
        return seats;
    }
    
    string getType()
    {
        return type;
    }
    
};

int main()
{
   
    Car c1;
    
    c1.setFeatures("Mercedes", "Manual", "Black", 5);
    
    string b = c1.getBrand();
    string c = c1.getColor();
    int s = c1.getSeats();
    string type = c1.getType();
    
    cout << "The color of car c1 is: " << c << endl;
    cout << "The brand of car c1 is: " << c1.getBrand() << endl;
    
}

