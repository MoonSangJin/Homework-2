#include <iostream>
using namespace std;

class Base{
	public :
		int a;
		
	public :
		int b;
		
	public :
		int c;		
};

class Derived : public Base{
	private :
	
		void func1(){a=1; b=2; c=3; d=4; e=5; f=6;}
		
	protected :
		
		void func2(){a=1; b=2; c=3; d=4; e=5; f=6;}
		
	
	public :
		int d,e,f;
		void func3(){a=1; b=2; c=3; d=4; e=5; f=6;}		
};

int main(void)
{
	Derived dObj;
	dObj.a=1;
	dObj.b=2;
	dObj.c=3;
	dObj.d=4;
	dObj.e=5;
	dObj.f=6;
	
	return 0;
	
}
