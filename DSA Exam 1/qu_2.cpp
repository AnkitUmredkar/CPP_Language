//WAP TO PRINT FIBBONACHI SERIES TILL N TIMES USING DO WHILE LOOP.
//0,1,1,2,3,5,8,13....

#include<iostream>
using namespace std;


int main(){
	
	int n,first=1,sec=1,i=0,total;
	
	cout << "Enter value of n : ";
	cin >> n;
	
	cout << endl << "Fibbonachi Series is : ";
		
	do{
		cout << first << " ";
		total = first + sec;
		first = sec;
		sec = total;
		i++;
	}while(i < n);
	
	
	return 0;
}

