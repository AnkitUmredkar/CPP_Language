//Write a Program to find total bill by adding % of GST of user choice.
//For example,
//Input:
//Enter Base Amount: 5000
//Enter GST% =18
//
//Output: 
//Total Bill Amount = 5900

#include<iostream>
using namespace std;

int main()
{
	int amt,Total;
	float GST;
	
	cout << "Enter the base Amount : " ;
	cin >> amt;
	
	cout << "Enter the GST% = " ;
	cin >> GST;
	
	Total = amt + amt * (GST/100);
	
	cout << endl << "Total Bill Amount is : " << Total;
	
	return 0;
}
