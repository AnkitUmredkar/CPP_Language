//WAP TO PRINT ONLY BOUNDARIES ELEMENTS OF NxN Pattern.

#include<iostream>
using namespace std;


int main(){
	
	int n;
	
	cout << "Enter value of n : ";
	cin >> n;
	
	cout << endl << "All Elements Pattern : " << endl;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << j << " ";
		}
		cout << endl;
	}
	
	cout << endl << "All Boundary Elements Pattern : " << endl;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j == 1 || j == n || i == 1 || i == n){
				cout << j << " ";
			}
			else{
				cout << "  ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
