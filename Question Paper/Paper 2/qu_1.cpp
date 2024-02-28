//Create a class representing a `Movie` with attributes like `title`, `genre`, and `releasedYear`. Demonstrate the instantiation of objects using array and accessing 
//their attributes.

#include<iostream>
using namespace std;

class Movie
{
	string title,genre;
	int releasedYear;
	public :
	void set()
	{
		cout << endl << endl << "Movie Title : ";
		getline(cin,title);
		
		cout << "Movie genre : ";
		getline(cin,genre);
		
		cout << "Movie released Year : ";
		cin >> releasedYear;
		cin.ignore();
	}	
	void get()
	{
		cout << endl << endl << "-----Details Are Below-----" << endl;
		cout << "Title : " << title << endl;
		cout << "genre : " << genre << endl;
		cout << "Released Year : " << releasedYear << endl << endl;
	}
};

int main()
{
	int i,n=5;
	Movie m1[n];
	
	for(i=0; i<n; i++)
	{
		m1[i].set();
	}
	
	for(i=0; i<n; i++)
	{
		m1[i].get();
	}
	
	
	return 0;
}
