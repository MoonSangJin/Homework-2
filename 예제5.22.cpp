#include <iostream>
using namespace std;

class CPoint{
	private :
		int x,y;
		static int count; // count ���� ������ ����� ���µ� ��ü���� �����ϴ� ������ �ƴ϶� �����ϴ� ���� ��, class CPoint�� �ϳ��� ��������� �ٸ� ��ü���� �ͼ� �ǵ帮�� ��ȭ 
		
		
	public :
		CPoint(int a=0, int b=0) : x(a),y(b){count ++;
		}	
		~CPoint(){count --;
		}
		
		void Print(){cout<<"("<<x<<","<<y<<")"<<endl;
		}
		
		static int GetCount(){return count; // count���� ������ִ� �Լ� ���� ��ü�� �̿� ���� 
		}
};

int CPoint::count=0; //static ��� ���� �ʱ�ȭ �ʼ���. 


int main(void)
{
	CPoint P1(1,2);  
	CPoint *P2=new CPoint(3,4);
	
	cout<<"count : "<<CPoint::GetCount()<<endl;
	delete P2;
	cout<<"count : "<<P1.GetCount()<<endl;
	
	return 0;	
	
}
	
