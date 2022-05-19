#include<iostream>
#include<cstring>
using namespace std;

//class declaration
class Visitor
{
	protected:
		char name[20];
		char address[30];
		char email[30];
	public:
		Visitor();
		Visitor(const char pname[],const char paddress[],const char pemail[]);
		void searchProducts(Product *pProduct);
		void registerUser();
		virtual void displayDetails();
		~Visitor();
};

//class definition
Visitor::Visitor() //default constructor
{
	strcpy(name," ");
	strcpy(address," ");
	strcpy(email," ");
}
Visitor::Visitor(const char pname[],const char paddress[],const char pemail[])//overloading constructor
{
	strcpy(name,pname);
	strcpy(address,paddress);
	strcpy(email,pemail);
}
void Visitor::searchProducts(Product *pProduct)
{
	
}
void Visitor::registerUser()
{
	
}
void Visitor::displayDetails()
{
	
}
Visitor::~Visitor()//Destructor
{
	
}
