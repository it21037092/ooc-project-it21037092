#include<iostream>
#include<cstring>
#include "Order.h"
#include "RegisteredCustomer.h"
#include "Deliveries.h"
#include "Payment.h"

using namespace std;

//class declaration
class Product
{
  private :
  int ProductID;
  char ProductName [30];
  int ProductPrice;
  int ProductQty;
  Supplier *sup[SIZE];

  public :
  Product(int pId, const char pName[] , int pPrice );
  void setProductQty(int pQty);
  int getProductQty();
  void displayProductDetails();
  void updateProductDetails();
  void addSupplier (Supplier *sup1);
  ~Product();
  
};




//class implementation



Product::Product(int pId, const char pName[] , int pPrice )
{
  ProductID = pId;
  strcpy(ProductName,pName);
  ProductPrice = pPrice;
}

void Product::setProductQty(int pQty)
{

}

int Product::getProductQty()
{
  
}

void Product::displayProductDetails()
{
 cout<<ProductID<<endl;
}

void Product::updateProductDetails()
{
 
}

void Product::addSupplier (Supplier *sup1){

}

Product::~Product()
{
  
}  

