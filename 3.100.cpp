#include<iostream>
#include<string>
using namespace std;
class Invoice{
	private:
	string partnumber,partdescription;
	int quantity,price;
	double value_tax;
	double discount;
    public:
    	Invoice(string a,string b,int c,int d,double e=0.20,double f=0)
    	{
    		partnumber=a;
    		partdescription=b;
    		quantity=c;
    		price=d;
    		value_tax=e;
    		discount=f;
		}
		string getpartnumber()
		{
			return partnumber;
		}
		void setpartnumber(string a)
		{
			partnumber=a;
		}
		string getpartdescription()
		{
			return partdescription;
		}
		void setpartdescription(string a)
		{
			partdescription=a;
		}
		int getquantity()
		{
		   return quantity;
		}
		void setquantity(int a)
		{
			quantity=a;
		}
		int getprice()
		{
		   return price;
		}
		void setprice(int a)
		{
			price=a;
		}
		double getvalue_tax()
		{
		   return value_tax;
		}
		void setvalue_tax(double a)
		{
			value_tax=a;
		}
		double getdiscount()
		{
		   return discount;
		}
		void setdiscount(double a)
		{
			discount=a;
		}	
		getinvoiceamount()
		{
			int invoice_amount;
			invoice_amount=quantity*price;
			int tax;
			tax=(invoice_amount*value_tax)/100;
			invoice_amount=invoice_amount+tax;
			invoice_amount=invoice_amount-discount;
			return invoice_amount;
		}
};int main()
{
	string a,b;
	int x,y;
	cout<<"enter part number:\n";
	cin>>a;
	cout<<"enter part description:\n";
	cin>>b;
	cout<<"enter quantity:\n";
	cin>>x;
	cout<<"enter part number:\n";
	cin>>y;
	
	
	Invoice inn(a,b,x,y,0.20,0);
	
	cout<<"invoice amount is:"<<inn.getinvoiceamount();
	
	
	
}
