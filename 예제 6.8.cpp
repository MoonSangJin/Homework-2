#include <iostream>
using namespace std;

class CPoint{
	private :
		int x,y;
		
	public :
		CPoint(int a=0, int b=0) : x(a), y(b){}
		void Print(){cout<<"("<<x<<","<<y<<")"<<endl;}
		
			
};

CPoint GetPoint(void)
{
	CPoint Po(0,1);
	return Po;
}

int main(void)
{
	CPoint P1=GetPoint();
	P1.Print();
	
	
	return 0;
}
