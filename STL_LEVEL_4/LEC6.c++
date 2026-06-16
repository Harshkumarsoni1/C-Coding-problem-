#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    public:
    string brand= "Kia";
    string color= "red";
    int seats= 7;
    void accelerate(){
        cout<<"speeding up!"<< endl;
    }

};
class Car: public Vehicle{
    public:
    string type= "automatic";


};
class ElectricCar: public Car{
    public:
  int chargingTime = 7;
 
    void charge()
    {
        cout << "Getting Charged!" << endl;
    }
};
class PetrolCar: public Car{
    public:
    int fuelTankCapacity = 30;
  
    void fuel()
    {
        cout <<"Fuel is present!" << endl;
    }

};
class HybridCar: public ElectricCar, public PetrolCar{

};





int main() {

    HybridCar h1;
     h1.fuel();
    cout<<" capacity of fuel tank"<< h1.fuelTankCapacity<<endl;
    h1.charge();
    cout<<"tiime need to charge"<< h1.chargingTime;
    
    return 0;
}


// Hybrid Inheritence


class Vehicle {
public:
    string brand = "KIA";
    string color = "Red";
    int seats = 7;

public:
    void accelerate() {
        cout << "Speeding up!!" << endl;
    }
};

class Car : public virtual Vehicle { // virtual to avoid diamond problem
public:
    string type = "Automatic";
};

class ElectricCar : public virtual Car {
public:
    int chargingTime = 7;

public:
    void charge() {
        cout << "Getting Charged!" << endl;
    }
};

class PetrolCar : public virtual Car {
public:
    int fuelTankCapacity = 30;

public:
    void fuel() {
        cout << "Fuel is present!" << endl;
    }
};

class HybridCar : public ElectricCar, public PetrolCar {
public:
    string mode = "Hybrid";
};




int main() {
    HybridCar hc;

    cout << "Brand: " << hc.brand << endl;
    cout << "Color: " << hc.color << endl;
    cout << "Seats: " << hc.seats << endl;
    cout << "Type: " << hc.type << endl;
    cout << "Mode: " << hc.mode << endl;

    hc.accelerate();
    hc.charge();
    hc.fuel();

    return 0;
}




