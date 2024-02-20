//Create a class representing a `Book` with attributes like `title`, `author`, and `publishedYear`. Demonstrate the instantiation of objects using
//array and accessing their attributes.

#include<iostream>
using namespace std;

class Book
{
	string title,author;
	int publishedYear;
	public : 
		void set()
		{
			cout << endl << endl << "Enter the title of Book : ";
			getline(cin,title);
			
			cout << "Enter the Name of Author : ";
			getline(cin,author);
			
			cout << "Enter the PublishedYear of Book : ";
			cin >> publishedYear;
			cin.ignore();	
		}
		void get()
		{
			cout << endl << endl << "All Book's Details are Below " << endl;
			cout << endl << "-------------------------" << endl;
			cout << "Title of Book          : " << title << endl;
			cout << "Author of Book         : " << author << endl;
			cout << "Published Year of Book : " << publishedYear;	
			cout << endl << "-------------------------" << endl;		
		}	
};

int main()
{
	Book b1[3];
	
	for(int i=0; i<3; i++)
	{
		b1[i].set();
	}
	
	for(int i=0; i<3; i++)
	{
		b1[i].get();
	}

	return 0;
}

