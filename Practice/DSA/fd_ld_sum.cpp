#include<iostream>
using namespace std;

int main()
{
	int n,ld,fd;
	
	cout << "Enter the value : ";
	cin >> n;
	
	ld = n % 10;
	
	while(n > 9)
	{
		n = n / 10;
	}
	
	fd = n;
	
	cout << fd << " + " << ld << " = " << fd + ld;
	
	return 0;
}
