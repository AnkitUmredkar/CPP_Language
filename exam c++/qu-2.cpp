//2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.

#include<iostream>
using namespace std;

class Time
{
	public:
	int hh,mm,ss,second,s;
	
	void hms()
	{
		cout << "Enter the second : ";
		cin >> second;
		
		hh = (second / 3600);
		s = (second % 3600);
		mm = (s / 60);
		ss = (s % 60);
		
		cout << hh << " : " << mm << " : " << ss;
	}
	
};

int main()
{
	Time a;
	
	a.hms();
	
	return 0;
}
