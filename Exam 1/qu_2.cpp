//2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
//For example,
//Input:
//Enter seconds: 4520
//
//Output:
//1:15:20

#include<iostream>
using namespace std;

class TimeConverter 
{
	int hh,mm,ss,second,s;

	public:
	
	void readsecond()
	{
		cout << "Enter the second : ";
		cin >> second;
	}
	
	void showTime()
	{
		if(second >= 0)
		{
			hh = (second / 3600);
			s = (second % 3600);
			mm = (s / 60);
			ss = (s % 60);
			
			cout << hh << " : " << mm << " : " << ss << endl;
		}
		else
		{
			cout << endl << "Second should be positive!!";
		}
	}
	
};

int main()
{
	TimeConverter obj;
	
	obj.readsecond();
	obj.showTime();
	
	return 0;
}
