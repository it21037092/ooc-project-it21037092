#include"payment.h"
#include "RegisteredCustomer.h"
#include "Delivery.h"
#define SIZE1 5
#define SIZE2 5
#define SIZE3 5

//class declaration
class Report
{
  private:
      Order* order[SIZE1];
      Delivery* delivery[SIZE2];
      Payment* payment[SIZE3];

  public:
      Report();
      Report(Order* porder[],Delivery* pdelivery[],Payment* ppayment[]);
      void orderDetailsReport();
      void paymentDetailsReport();
      void deliveryDetailsReport();
      ~Report();
}



//class implementation

Report::Report()    //default constructor
{
  for(int i=0;i<SIZE1;i++)
    {
      order[i]=0;
    }
  for(int j=0;j<SIZE2;j++)
    {
      payment[j]=0;
    }
  for(int l=0;l<SIZE3;l++)
    {
      delivery[l]=0;
    }
}

Report::Report(Order* porder[],Delivery* pdelivery[],Payment* ppayment[])  
//overloading contructor
{
  for(int i=0;i<SIZE1;i++)
    {
      order[i]=porder[i];
    }
  for(int j=0;j<SIZE2;j++)
    {
      payment[j]=ppayment[j];
    }
  for(int l=0;l<SIZE3;l++)
    {
      delivery[l]=pdelivery[l];
    }
}

void Report::orderDetailsReport()
{
  
}
void Report::paymentDetailsReport()
{

}
  
void Report:: deliveryDetailsReport()
{

}

Report::~Report()
{
  //destructor
for (int i = 0; i < SIZE1; i++)
{
delete Order[i] ;
}
for (int j = 0; j < SIZE2; j++)
{
delete Payment[j] ;
}
for (int k = 0; k < SIZE3; k++)
{
delete Delivery[k] ;
}
}

