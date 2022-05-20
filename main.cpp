#include <iostream>
#include <string.h>

using namespace std;

#define SIZE 10

//class declaration
class delivery
{
  private :
    int deliveryID;
    char deliveryName[10];
    char deliveryAddress[30];
    char deliveryDate[10];


  public :
    delivery();
    delivery(int dID,const char dName[],const char dAddress[],const char dDate[]);
    void login();
    void displayDeliveryDetails();
    ~delivery();
};

//class definition
delivery :: delivery() //default constructor
{
  deliveryID = 0;
  strcpy(deliveryName,"");
  strcpy(deliveryAddress,"");
  strcpy(deliveryDate,"");
}

delivery :: delivery(int dID,const char dName[],const char dAddress[],const char dDate[]) //overloaded constructor
{
  deliveryID = dID;
  strcpy(deliveryName,dName);
  strcpy(deliveryAddress,dAddress);
  strcpy(deliveryDate,dDate);

}

void delivery :: login()
{

}

void delivery :: displayDeliveryDetails()
{

}
delivery :: ~delivery()//destructor
{

}

int main()
{

    return 0;
}
