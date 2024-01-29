//Write a program to convert second into hh: mm: ss

#include<iostream>
using namespace std;

int main()
{
	int a,ss=0,mm=0,hh=0;
	
	cout << "\n\nEnter the seconds :";
	cin >> a;
	
	if(a < 0)
	{
		printf("Second should be positive!!");
	}
	
	ss = a % 60;
	mm = (a / 60);
	
	if(mm >= 60)
	{
		mm = mm - 60;
	}
	
	a = (a / 60);
	hh = (a / 60);

	cout << hh << " : "<< mm << " : " << ss;
	while(1)
	{
		main();
	}
 	return 0;
}
