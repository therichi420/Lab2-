#include<iostream>


#include"mycode.h"
using namespace std;
int main()
{
	Matrix a,b,c,d;
	cout<<"Matrix 1 is"<<endl;
	a.display();
	cout<<endl;
	cout<<"Matrix 2 is"<<endl;
	b.display();
	cout<<endl;

	cout<<"addition is"<<endl;
	c.add(a,b);
	c.display();
	cout<<endl;

	cout<<"subtraction is"<<endl;
	c.sub(a,b);
	c.display();
	cout<<endl;

	cout<<"Multiplication is"<<endl;
	c.multiply(a,b);
	c.display();
	cout<<endl;
	
	cout<<"The last matrix which will be added into the resultant matrix is:"<<endl;
	a.display();
	cout<<endl;
	
	cout<<"Multiplication and addition is"<<endl;
	d.addmulti(c,a);
	d.display();
	cout<<endl;
	

	
	return 0;
}





	



