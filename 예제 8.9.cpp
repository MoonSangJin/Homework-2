#include <iostream>
using namespace std;

class CPoint1{
	private :
		int x;
		
	protected :
		int u;
		
	public :
		CPoint1(int a) : x(a){cout<<"CPoint1 생성자// 여기서 맨 처음값 a가 나와 : "<<x<<endl;
		}		
		~CPoint1(){cout<<"CPoint1 소멸자"<<endl;
		}
		void Print(){cout<<"CPoint1"<<endl;
		}
};

class CPoint2 : public CPoint1{
	private :
		int y;
		
	protected :
		int v;
		
	public :
		CPoint2(int a, int b) : CPoint1(a),y(b){cout<<"CPoint2 생성자// a 값은 cpoint1이 정하고 여기서는 b가 나오지 : "<<y<<endl;
		}		
		~CPoint2(){cout<<"CPoint2 소멸자"<<endl;
		}
		void Print(){cout<<"CPoint2"<<endl;
		}
};

class CPoint3 : public CPoint2{
	private :
		int z;
		
	protected :
		int w;
	
	public :
		CPoint3(int a, int b, int c) : CPoint2(a,b),z(c){
			cout<<"CPoint3 생성자// a,b는 앞에 얘들이 정하고 여기서는 c가 나와 : "<<z<<endl;
			cout<<"너가 생성한거는 이래 : "<<a<<b<<c<<endl;
		}	
		~CPoint3(){
			cout<<"CPoint3 소멸자"<<endl;
		}
		void Print(){
			CPoint1::Print();
			CPoint2::Print();
			cout<<"CPoint3"<<endl;
		}
};

int main(void)
{
	CPoint3 P3(1,2,3);
	P3.Print();
	
	return 0;
}
