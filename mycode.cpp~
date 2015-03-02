#include<iostream>

#include"mycode.h"

using namespace std;

void Matrix :: display()
	{ 

		for (int i=0; i<row; i++)
		{
			cout<<endl;
			for(int j=0; j<col; j++)
			{
				
				 cout << matrix[i][j]<<"  ";
				 
			}
		}
	}

	void Matrix :: add(Matrix a, Matrix b)
	{
	 for (int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
				
				matrix[i][j]=a.matrix[i][j] + b.matrix[i][j];
			}
		}
	}
	
 
	void Matrix :: sub(Matrix a, Matrix b)
	{
	 for (int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
				
				matrix[i][j]=a.matrix[i][j] - b.matrix[i][j];
			}
		}
	}

	void Matrix :: multiply(Matrix a, Matrix b)
	{
	for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				matrix[i][j]=0;

				for(int k=0; k<col;k++)
				{
					matrix[i][j]=matrix[i][j]+a.matrix[i][k]*b.matrix[k][j];
				}
			}
		}
	}


	void Matrix :: addmulti(Matrix c, Matrix a)
	{
	 for (int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
				
				matrix[i][j]=c.matrix[i][j] + a.matrix[i][j];
			}
		}
	}			
