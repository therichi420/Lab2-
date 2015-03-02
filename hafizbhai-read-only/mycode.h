
#include<iostream>
using namespace std;
const int row = 2;
const int col = 2;




class Matrix
{

	
public: Matrix()                    //constructor
	{
		matrix[0][0]=4;
		matrix[0][1]=5;
		matrix[1][0]=6;
		matrix[1][1]=3;
	}
	int matrix[row][col];
			

	void display();
	
	void add(Matrix a, Matrix b);
				 
	void sub(Matrix a, Matrix b);
	void multiply(Matrix a, Matrix b);

	void addmulti(Matrix c, Matrix a);
	

	
	
};
