#include <iostream>
using namespace std;


struct Car
{
    string brand;
    string model;
    int wheels = 4;
    float price;
    bool i_have;

};
void StatPrint(Car car);

int main()
{
    Car Car1;
    Car1.brand = "Mazda";
    Car1.model = "6";
    Car1.price = 6500f;
    Car1.i_have = false;

    Car Car2;
    Car2.brand = "Lada";
    Car2.model = "9";
    Car2.price = 5500f;
    Car2.i_have = true;
    
    Car Car3;
    Car3.brand = "Shkoda";
    Car3.model = "Octavia";
    Car3.price = 5000f;
    Car3.i_have = false;


    cout << "#####################";
    StatPrint(Car1);
    StatPrint(Car2);
    StatPrint(Car3);
}
void StatPrint(Car car) 
{
    cout << "00000000000000000000000000000";
    cout << "\nCar brand is: " << car.brand;
    cout << "\nCar model is " << car.model;
    cout << "\nCar price is: " << car.price << "$";
    if (!car.i_have)
        cout << "\nThis car is not in your collection";
    if (car.wheels != 6)
        cout << "\nThis is not a regular car!";
}