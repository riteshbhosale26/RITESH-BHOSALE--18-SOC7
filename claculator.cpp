#include<iostream>
using namespace std;

class Calculator
{
	public:
	int sub;
	int substraction(int a,int b)
	{
		return sub=a-b;
	}

	int substraction(int a,int b,int c)
	{
		return sub=a-b-c;
	}
};

int main ()
{
	Calculator c;
	cout << "the sub is :"<<c.substraction(9,5)<<endl;
	cout << "the sub 2 is :" << c.substraction(8,4,1)<<endl;
	return 0;
} 
