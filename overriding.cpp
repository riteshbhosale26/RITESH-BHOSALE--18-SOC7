#include<iostream>
using namespace std;

class Animal
{
	public:
	void eat ()
	{
		cout << "the animals have fresh food to eat .";
	}
};

class sheru : public Animal 
{
	public:
	void eat()
	{
		cout << "it hunts for his food .";
	}
};

int main ()
{
	sheru s;
	Animal a;
	a.eat();
	s.eat();
	return 0;
}
