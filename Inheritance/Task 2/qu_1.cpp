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
		
		void setSBIROI()
		{
			cout << "Enter the Intrece Rate of SBI : " ;
			cin >> rateSBI;
		}
		
		void setBOBROI()
		{
			cout << "\nEnter the Intrece Rate of BOB : " ;
			cin >> rateBOB;
		}
		
		void setICICIROI()
		{
			cout << "\nEnter the Intrece Rate of ICICI : ";
			cin >> rateICICI;
		}

};

class SBI : public RBI
{
	public : 
		void get1()
		{
			setSBIROI();
			cout << "The Intrest Rate of SBI is : " << rateSBI << " %" << endl;
		}
};

class BOB : public RBI
{
	public :
		void get2()
		{
			setBOBROI();
			cout << "The Intrest Rate of BOB is : " << rateBOB << " %"<< endl;
		}
};

class ICICI : public RBI
{
	public :
		void get3()
		{
			setICICIROI();
			cout << "The Intrest Rate of ICICI is : " << rateICICI <<" %" << endl;		
		}
};


int main()
{
	
	SBI s;
	s.get1();
	
	BOB b;
	b.get2();
	
	ICICI i;
	i.get3();
	
	return 0;
}
