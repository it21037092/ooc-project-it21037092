#include"Visitor.h"
#include <iostream>
#include <cstring>


//class declaration

class RegisteredCustomer:public Visitor
{
	protected:
		int custID;
		char custUsername[10];
		char custPassword[10];
	public:
	    RegisteredCustomer();
		RegisteredCustomer(int pcustID,const char pcustUsename[],const char pcustPassword[],const char pname[],const char paddress[],const char pemail[]);
		void login();
		void displayCustomerDetails();
		void logout();
		~RedisteredCustomer();	
};

//class implementation

RegisteredCustomer::RegisteredCustomer()//default constructor
{
	int custID=0;
	strcpy(custUsername," ");
	strcpy(custPassword," ");
}
RegisteredCustomer::RegisteredCustomer(int pcustID,const char pcustUsername[],const char pcustPassword[],const char pname[],const char paddress[],const char pemail[]):Visitor(pname,paddress,pemail)//overloading constructor
{
  custID=pcustID;
	strcpy(custUsername,pcustUsername);
	strcpy(custPassword,pcustPassword);	
}
void RegisteredCustomer::login()
{
	
}
void RegisteredCustomer::displayCustomerDetails()
{
	
}
void RegisteredCustomer::logout()
{
	
}
RegisteredCustomer::~RegisteredCustomer()//Destructor
{
	
}


