//WAP TO PRINT PRIME NUMBERS OF 1 TO N USING WHILE LOOP.

#include<iostream>
using namespace std;

bool isPrime(int i){
	
	bool check = true;
	int k = 2;
	while(k < i){
		if(i % k == 0){
			check = false;
		}
		k++;
	}
	
	return check;
	
}


int main(){
	
	int n,i=1;
	
	cout << "Enter value of n : ";
	cin >> n;
	
	cout << endl << "All Prime Number is : " ;
	while(i <= n){
		if(isPrime(i)){
			cout << i << " ";
		}
		i++;
		
	}
	
	return 0;
}

