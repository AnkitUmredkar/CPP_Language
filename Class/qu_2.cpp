//3.Write a program to convert second into hh: mm: ss

#include<iostream>
using namespace std;

int main()
{
	int second,ss=0,mm=0,hh=0;
	
	cout << "\n\nEnter the seconds :";
	cin >> second;
	
	if(second < 0)
	{
		printf("Second should be positive!!");
	}
	
	hh = (second / 3600);
	ss = (second % 3600);
	mm = (ss / 60);
	ss = (second % 60);

	cout << hh << " : "<< mm << " : " << ss;

 	return 0;
}
