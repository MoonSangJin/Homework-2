#include <iostream>
#include <vector>
using namespace std;

class CPoint{
	private :
		int x,y;
		
	public :
		CPoint(int a=0, int b=0) : x(a), y(b) {}
		void Print(){cout<<"("<<x<<","<<y<<")"<<endl;
		}
			
};

int main(void)
{
	int i;
	vector<CPoint> cAry(5);
	
	for(i=0; i<5; i++)
	{
		cAry.push_back(CPoint(i+1,i+1));
	}
	
	for(i=0; i<10; i++)
	{
		cAry[i].Print();
	}
	
}
