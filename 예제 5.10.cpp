#include <iostream>
using namespace std;

class CPoint{
	private :
		int x,y;
		
	public :
		CPoint(int a=0,int b=0) : x(a),y(b){}
		
		
		CPoint *MoveX(int a) {x+=a; return this;}
		
		CPoint *MoveY(int b) {y+=b; return this;}
		
		void Print(){
			cout<<x<<","<<y<<endl<<endl;
		}	
		
		friend void sum(CPoint P3,int a);
}; 

void sum(CPoint P3,int a){
	CPoint P;
	P.x=P3.x+a;
	P.y=P3.y+a;
	
	cout<<P.x<<","<<P.y<<endl;
}

int main(void)
{
	
	CPoint P1(1,2);
	P1.MoveX(3)->MoveY(4);
	P1.Print();
	
	sum(P1,5);
	P1.Print();
	
	return 0;
}
