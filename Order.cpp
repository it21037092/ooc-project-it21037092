#include <iostream>
#include<cstring>
#include "Product.h"
#include "RegisteredCustomer.h"
#include "Deliveries.h"
#include "Payment.h"
using namespace std;

#define SIZE 2

//class declaration
class Order
{
  private :
    int orderID;
    char orderDescription[20];
    char orderDate[10];
    int noOfDeliveries;

    Product *pro[SIZE];
    RegisteredCustomer *customer;
    Deliveries *delv[SIZE];
    Payment *pay;

  public :
    Order();
    Order(int O_ID,const char O_Description[],const char O_Date[],RegisteredCustomer *cus,Payment *pPay);
    void addProduct(Product *pro1, Product *pro2);
    void placeOrder();
    void confirmOrder();
    void displayOrderDetails();
    void addDeliveries(Deliveries *d);
    ~Order();
};


//class definition
Order :: Order() //default constructor
{
  orderID = 0;
  strcpy(orderDescription,"");
  strcpy(orderDate,"");
}
Order :: Order(int O_ID,const char O_Description[],const char O_Date[],RegisteredCustomer *cus,Payment *pPay) //overloaded constructor
{
  orderID = O_ID;
  strcpy(orderDescription,O_Description);
  strcpy(orderDate,O_Date);
  
  customer = cus;
  pay = pPay;
}
void Order :: addProduct(Product *pro1, Product *pro2)
{
  pro[0] = pro1;
  pro[1] = pro2;
}
void Order :: placeOrder()
{  
}
void Order :: confirmOrder()
{
}
void Order :: displayOrderDetails()
{
}
void Order :: addDeliveries(Deliveries *d)
{
   if(noOfDeliveries<SIZE)
     delv[noOfDeliveries] = d;
   noOfDeliveries++;
}
Order :: ~Order() //destructor
{  
}

