#include<iostream>
using namespace std;

class vehicle
{
    public:
    string brand;
    string model;
    string car_type;
   

};
    class car:public vehicle
    {
         public:
         string car_type;
    
    car (string B,string M,string CT)
    {
        brand = B;
        model = M;
        car_type = CT;
        
    }
     void info()
    {
        cout<<"CAR BRAND IS :  "<<brand<<endl;
        cout<<"CAR MODEL IS :  "<<model<<endl;
        cout<<"CAR TYPE IS  :  "<<car_type;
    }
};
int main()
{
    string BR,MO,CTY;
    cout<<"Enter the brand of car"<<endl;
    cin>>BR;
    cout<<"Enter the model of car"<<endl;
    cin>>MO;
    cout<<"Enter the type of car"<<endl;
    cin>>CTY;
 car obj(BR,MO,CTY);
 obj.info();
}