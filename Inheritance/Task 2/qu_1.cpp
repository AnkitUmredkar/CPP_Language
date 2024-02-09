/*.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes*/

#include<iostream>
using namespace std;

class RBI
{
	protected : 
	
	float rateSBI,rateBOB,rateICICI;
	
	public :
		
		void getSBIROI()
		{
			cout << "Enter the Intrece Rate of SBI : " ;
			cin >> rateSBI;
		}
		
		void getBOBROI()
		{
			cout << "\nEnter the Intrece Rate of BOB : " ;
			cin >> rateBOB;
		}
		
		void getICICIROI()
		{
			cout << "\nEnter the Intrece Rate of ICICI : ";
			cin >> rateICICI;
		}

};

class SBI : public RBI
{
	public : 
		void show1()
		{
			getSBIROI();
			cout << "The Intrest Rate of SBI is : " << rateSBI << " %" << endl;
		}
};

class BOB : public RBI
{
	public :
		void show2()
		{
			getBOBROI();
			cout << "The Intrest Rate of BOB is : " << rateBOB << " %"<< endl;
		}
};

class ICICI : public RBI
{
	public :
		void show3()
		{
			getICICIROI();
			cout << "The Intrest Rate of ICICI is : " << rateICICI <<" %" << endl;		
		}
};


int main()
{
	
	SBI s;
	s.show1();
	
	BOB b;
	b.show2();
	
	ICICI i;
	i.show3();
	
	return 0;
}
