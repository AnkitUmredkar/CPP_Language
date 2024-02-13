#include<iostream>
using namespace std;

class A
{
	protected :
	int a=30;	
};

class B
{
	protected :
	int b=30;	
};

class C
{
	protected :
	int c=40;	
};

class D:public A,public B,public C
{
	public:
	void rocky()
	{
		cout << "Total : " << a+b+c;
	}	
};

int main()
{
	D obj;
	
	obj.rocky();
	
	return 0;
}