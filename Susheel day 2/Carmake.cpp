#include<iostream>
using namespace std;

class Car{
    
    int gear, engine, make;
    public:
    
    void acceptdrive()
    {
        cout<<"driving car"<<endl;
        cin>>gear>>engine>>make;
    }
    void display_speed()
    {cout<<"the value of car = "<<gear<<"\t"<<engine<<"\t"<<make;
    }
};

int main(){
    Car nano;
    nano.acceptdrive();
    nano.display_speed();
    Car bmw;
    volvo.acceptdrive();
    volvo.display_speed();
}
    

