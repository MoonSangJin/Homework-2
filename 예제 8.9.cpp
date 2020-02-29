#include <iostream>
using namespace std;

class CPoint1{
	private :
		int x;
		
	protected :
		int u;
		
	public :
		CPoint1(int a) : x(a){cout<<"CPoint1 ������// ���⼭ �� ó���� a�� ���� : "<<x<<endl;
		}		
		~CPoint1(){cout<<"CPoint1 �Ҹ���"<<endl;
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
		CPoint2(int a, int b) : CPoint1(a),y(b){cout<<"CPoint2 ������// a ���� cpoint1�� ���ϰ� ���⼭�� b�� ������ : "<<y<<endl;
		}		
		~CPoint2(){cout<<"CPoint2 �Ҹ���"<<endl;
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
			cout<<"CPoint3 ������// a,b�� �տ� ����� ���ϰ� ���⼭�� c�� ���� : "<<z<<endl;
			cout<<"�ʰ� �����ѰŴ� �̷� : "<<a<<b<<c<<endl;
		}	
		~CPoint3(){
			cout<<"CPoint3 �Ҹ���"<<endl;
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
