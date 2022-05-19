#include<iostream>
#include<cstring>

//class declaration
class Payment
{
  private:
      int payID;
      char payType[20];
      double payAmount;
      char payDate;

  public:
    Payment();
    Payment(int pID,const char pType[],double pAmount,const char pDate[] );
    void checkPayment();
    void confirmPayment();
    void displayPaymentDetails();
    ~Payment();
}



//class definition
Payment::Payment() //default constructor
{
  payID=0;
  strcpy(payType,"");
  payAmount=0;
  strcpy(payDate,"");
}

Payment::Payment(int pID,const char pType[],double pAmount,const char pDate[])  //overloading constructor
{
  payID=pID;
  strcpy_s(payType,pType);
  payAmount=pAmount;
  payDate=pDate;
}

void Payment::checkPayment()
{

  
}

void Payment::confirmPayment()
{

  
}

void Payment::displayPaymentDetails()
{

  
}

Payment::~Payment()  //destructor
{

  
}