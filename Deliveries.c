#include "Deliveries.h"
#include <iostream>
#include <string.h>

using namespace std;

//class declaration
class Deliveries
{
  private :
    int deliveryID;
    char deliveryName[10];
    char deliveryAddress[30];
    char deliveryDate[10];
    Order *order;

  public :
    Deliveries();
    Deliveries(int dID,const char dName[],const char dAddress[],const char dDate[],Order *o);
    void login();
    void displayDeliveryDetails();
    ~Deliveries();
};

//class definition
Deliveries :: deliveries() //default constructor
{
  deliveryID = 0;
  strcpy(deliveryName,"");
  strcpy(deliveryAddress,"");
  strcpy(deliveryDate,"");
}

Deliveries :: delivery(int dID,const char dName[],const char dAddress[],const char dDate[],Order *o) //overloaded constructor
{
  deliveryID = dID;
  strcpy(deliveryName,dName);
  strcpy(deliveryAddress,dAddress);
  strcpy(deliveryDate,dDate);
  order = o;
}

void Deliveries :: login()
{

}

void Deliveries :: displayDeliveryDetails()
{

}
Deliveries :: ~Deliveries()//destructor
{

}
