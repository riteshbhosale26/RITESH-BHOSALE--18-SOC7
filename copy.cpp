#include<iostream>
using namespace std;

class Book
{
	public:
	string Author;
	string Title;
	Book(string a,string t)
	{
		Author=a;
		Title=t;
	}

	Book(Book &b)
	{
		Author=b.Author;
		Title=b.Title;
	}

	void Display()
	{
		cout << "The name of the author is :"<< Author<<endl;
		cout <<"The name of the title is :" << Title << endl;
	}
};

int main()
{
	Book b1("Rudransh","She was the one");
	Book b2(b1);

	b1.Display();
	b2.Display();
	return 0;
}
