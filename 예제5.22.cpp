#include <iostream>
using namespace std;

class CPoint{
	private :
		int x,y;
		static int count; // count 값을 세려고 만들어 놨는데 객체마다 존재하는 변수가 아니라 공유하는 변수 즉, class CPoint에 하나만 만들어지고 다른 객체들이 와서 건드리면 변화 
		
		
	public :
		CPoint(int a=0, int b=0) : x(a),y(b){count ++;
		}	
		~CPoint(){count --;
		}
		
		void Print(){cout<<"("<<x<<","<<y<<")"<<endl;
		}
		
		static int GetCount(){return count; // count값을 출력해주는 함수 여러 객체가 이용 가능 
		}
};

int CPoint::count=0; //static 멤버 변수 초기화 필수임. 


int main(void)
{
	CPoint P1(1,2);  
	CPoint *P2=new CPoint(3,4);
	
	cout<<"count : "<<CPoint::GetCount()<<endl;
	delete P2;
	cout<<"count : "<<P1.GetCount()<<endl;
	
	return 0;	
	
}
	
