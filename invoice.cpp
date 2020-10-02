#include <iostream>
#include <string>

using namespace std;

class Invoice
{
	private:
		string partNumber;
		string partDescription;
		int itemQuantity;
		int itemPrice;
	public:
		Invoice(string, string, int, int);
		void setPartNumber(string);
		string getPartNumber();
		void setPartDescription(string);
		string getPartDescription();
		void setItemQuantity(int);
		int getItemQuantity();
		void setItemPrice(int);
		int getItemPrice();
		int getInvoiceAmmount();
 };
 
 Invoice::Invoice(string number, string description, int quantity, int price)
 {
 	partNumber=number;
 	partDescription=description;
 	if(quantity>0)
 	{
 		itemQuantity=quantity;
	}
	else
	{
		itemQuantity=0;
		cout<<"stok habis atau tidak valid"<<endl;
	}
	if(price>0)
	{
		itemPrice=price;
	}
	else
	{
		itemPrice=0;
		cout<<"harga tidak valid"<<endl;
	}
 }
 
 void Invoice::setPartNumber(string number)
 {
 	if(number.length()<=25)
 	{
 		partNumber=number;
	}
	if(number.length()>25)
	{
		partNumber=number.substr(0,25);
		cout << "Name \"" << number <<"\" exceeds maximum length (25).\n"<< "Limiting partNumber to first 25 characters.\n" << endl;
	}
 }
 void Invoice::setPartDescription(string description)
 {
 	if(description.length()<=25)
 	{
 		partDescription=description;
	}
	if(description.length()>25)
	{
		partDescription=description.substr(0,25);
		cout << "Name \"" << description <<"\" exceeds maximum length (25).\n"<< "Limiting partNumber to first 25 characters.\n" << endl;
	}
 }
 void Invoice::setItemQuantity(int quantity)
 {
 	if(quantity>0)
 	{
 		itemQuantity=quantity;
	}
	else
	{
		itemQuantity=0;
		cout<<"stik habis"<<endl;
	}
 }
 void Invoice::setItemPrice(int price)
 {
 	if(price>0)
 	{
 		itemPrice=price;
	}
	else
	{
		itemPrice=0;
		cout<<"harga yang dimasukkan tidak valid"<<endl;
	}
 }
 string Invoice::getPartNumber()
 {
 	return partNumber;
 }
 string Invoice::getPartDescription()
 {
 	return partDescription;
 }
 int Invoice::getItemQuantity()
 {
 	return itemQuantity;
 }
 int Invoice::getItemPrice()
 {
 	return itemPrice;
 }
 int Invoice::getInvoiceAmmount()
 {
 	return itemQuantity*itemPrice;
 }
 
 int main()
 {
 	cout<<"PRICE"<<endl;
 	Invoice Invoice1("C544", "Motherboard", 5, 1000000);
 	Invoice Invoice2("D439", "Proceccor", 8, 6000000);
 	cout<<"kode invoice 1 : "<<Invoice1.getPartNumber()<<endl;
 	cout<<"Deskripsi : "<<Invoice1.getPartDescription()<<endl;
 	cout<<"Total Item : "<<Invoice1.getItemQuantity()<<endl;
 	cout<<"Harga Per-Item : "<<Invoice1.getItemPrice()<<endl;
 	cout<<"Harga Total Invoice 1 : "<<Invoice1.getInvoiceAmmount()<<endl;
 	
 	cout<<"kode invoice 2 : "<<Invoice2.getPartNumber()<<endl;
 	cout<<"Deskripsi : "<<Invoice2.getPartDescription()<<endl;
 	cout<<"Total Item : "<<Invoice2.getItemQuantity()<<endl;
 	cout<<"Harga Per-Item : "<<Invoice2.getItemPrice()<<endl;
 	cout<<"Harga Total Invoice 1 : "<<Invoice2.getInvoiceAmmount()<<endl;
 }
