//2 Write a Program to implement method overriding by following the below-mentioned criteria:
//- Class Cricket -> Class T20Match
//- Class Cricket -> Class ODIMatch
//- Override the getTotalOvers() method in both classes.

#include<iostream>
using namespace std;

class Cricket
{
	protected :
		int over;
	
	public :
		void getTotalOvers(int over)
		{
			this-> over = over;
			cout << endl << "Total Over : " << over << endl;
		}
		
};

class T20Match : public Cricket
{
	public :
		void getTotalOvers(int over)
		{
			this-> over = over;
			cout << endl << "Total Over in T20 Match : " << over << endl;
		}
};

class ODIMatch : public Cricket
{
	public :
		void getTotalOvers(int over)
		{
			this-> over = over;
			cout << endl << "Total Over in ODI Match : " << over << endl;
		}
};

int main()
{
	T20Match obj1;
	obj1.getTotalOvers(20);
	
	ODIMatch obj2;
	obj2.getTotalOvers(50);

	return 0;
}

