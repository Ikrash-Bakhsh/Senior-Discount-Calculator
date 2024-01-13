#include<iostream>
using namespace std;
int main()
{
	float pri,a,fpri,exfpri;
	cout<<"Orignal Price = ";
	cin>>pri;
	cout<<"Enter age = ";
	cin>>a;
	fpri=(pri/10);
	exfpri=pri-fpri;
	
	if(a>=60)
	{
		cout<<"Senior !";
		cout<<"\nFinal Price = "<<exfpri;
	}else
	{
		cout<<"No Discount!";
		cout<<"\nPrice = "<<pri;
	}
}
