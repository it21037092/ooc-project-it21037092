#include "Product.h"
using namespace std;

#define SIZE 10

//class declaration
class Supplier
{
  private :
    int SupplierID;
    char SupplierName[10];
    char SupplierAddress[30];
    char SupplierEmail[10];
    Product *prod[SIZE];
    int noOfProducts;

  public :
    Supplier();
    Supplier(int sID,const char sName[],const char sAddress[],const char sEmail[]);
    void login();
    void displaySupplierDetails();
    void addProducts(Product *pr);
    ~Supplier();
};

//class definition
Supplier :: Supplier() //default constructor
{
  SupplierID = 0;
  strcpy(SupplierName,"");
  strcpy(SupplierAddress,"");
  strcpy(SupplierEmail,"");
}

Supplier :: Supplier(int sID,const char sName[],const char sAddress[],const char sEmail[]) //overloaded constructor
{
  SupplierID = sID;
  strcpy(SupplierName,sName);
  strcpy(SupplierAddress,sAddress);
  strcpy(SupplierEmail,sEmail);
  noOfProducts = 0;
}

void Supplier :: login()
{
  
}

void Supplier :: addProducts(Product *pr)
{
  if(noOfProducts < SIZE)
   prod[noOfProducts] = pr;
   noOfProducts++;
}

void Supplier :: displaySupplierDetails()
{

}
Supplier :: ~Suppplier()//destructor
{
  
}