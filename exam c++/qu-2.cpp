//2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.

#include<iostream>
using namespace std;

class Time
{
	public:
	int hh=0,mm=0,ss=0,second;
	
	void hms()
	{
		cout << "Enter the second : ";
		cin >> second;
		
		hh = (second / 3600);
		ss = (second % 3600);
		mm = (ss / 60);
		ss = (second % 60);
		
		cout << hh << " : " << mm << " : " << ss;
	}
	
};

int main()
{
	class Time a;
	
	a.hms();
	
	return 0;
}
