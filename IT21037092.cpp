/*
IT21037092
Heras U.A.A.S
Version E
Malabe
1.1 Group 
*/


#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class Vehicle {
private:
    int vehicelID;
    char vehicleBrand[30];
    char vehicleType[30];
    int vehiclePrice;

public:
    void setVehicleDetails(int vehice, const char Brand[], const char Type[], int price);
    void displayVehicleDetails();
    void setVehiclePrice(int price);

};


void Vehicle::setVehicleDetails(int vehice, const char Brand[], const char Type[], int price) {
    vehicelID = vehice;
    strcpy_s(vehicleBrand, Brand);
    strcpy_s(vehicleType, Type);

}
void Vehicle::displayVehicleDetails() {
    cout << "VehicleID:" << vehicelID << endl;
    cout << "VehicleBrand:" << vehicleBrand << endl;
    cout << "VehicleType:" << vehicleType << endl;
    cout << "VehiclePrice:" << vehiclePrice << endl;
    cout << endl;
}
void Vehicle::setVehiclePrice(int price) {
    vehiclePrice = price;
}

int main()
{
    Vehicle v1, v2, v3;
    int n1, n2, n3;

    v1.setVehicleDetails(1, "Toyota", "SUV", 8500000);
    v2.setVehicleDetails(2, "Nissan", "Saloon", 6000000);
    v3.setVehicleDetails(3, "Honda", "Convertible", 7200000);

    v1.setVehiclePrice(8500000);
    v2.setVehiclePrice(6000000);
    v3.setVehiclePrice(7200000);

    cout << "Input new priceof vehicle 1:";
    cin >> n1;
    cout << "Input new priceof vehicle 2:";
    cin >> n2;
    cout << "Input new priceof vehicle 3:";
    cin >> n3;
    cout << endl;

    v1.setVehiclePrice(n1);
    v2.setVehiclePrice(n2);
    v3.setVehiclePrice(n3);

    v1.displayVehicleDetails();
    v2.displayVehicleDetails();
    v3.displayVehicleDetails();

}
