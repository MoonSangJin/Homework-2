#include <iostream>
using namespace std;

class CPoint{
	private :
		int x,y;
		
	public :
		CPoint(int a=0,int b=0) : x(a),y(b){ cout<<"create"<<endl;
		}
		CPoint(const CPoint &a){x=a.x; y=a.y; cout<<"copy create"<<endl;
		}
		CPoint operator -()
		{
			x=-x;
			y=-y;
			return CPoint(x,y);
		}
		
		
		void Print(){
			cout<<x<<","<<y<<endl;
		}
		
		~CPoint(){cout<<"delete"<<endl;
		}
};

int main(void)
{
	CPoint P1(2,2);
	P1.Print();
	cout<<endl;
	CPoint P2=-P1;
	P2.Print();
	P1.Print();
	cout<<endl;
	CPoint P3=-(-P1);
	P3.Print(); 
	P1.Print();
	
	
	return 0;
}
