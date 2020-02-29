#include <iostream>
using namespace std;

class CShape{
	protected :
		int x,y;
		
	public :
		CShape(int a, int b) : x(a), y(b) {}
		void Move(int a, int b){x+=a; y+=b;}
		virtual void Print()=0; // ����Ʈ�Լ��� �����Լ��� �������� ������ ��ӹ��� �ֵ��� ������ �� �������̵��ϸ� ������ �ƴ϶� ����Ű�� ��� �����۵���  �׸��� ���� �����Լ��� �������ν�
		//CShape ��ü�� �������� �ʰ� �ٸ� Ŭ������ base Ŭ������ �߻� Ŭ������ �� �� �ִ�. 
		friend ostream &operator<<(ostream &out, CShape &Sh);
};

ostream &operator<<(ostream &out, CShape &Sh){
	Sh.Print();
	return out;
}

class CCircle : public CShape{
	private :
		double Radius;
		
	public : 
		CCircle(int a, int b, double r) : CShape(a,b), Radius(r){}
		double GetArea(){return (3.14*Radius*Radius);}	
		void Print(){ 
			cout<<"���� ���� : "<<GetArea()<<endl;   //�����Լ� �������̵� 
		}
};


class CRect : public CShape{
	private :
		int Garo,Sero;
		
	public :
		CRect(int a, int b, int g, int s) : CShape(a,b), Garo(g), Sero(s) {}
		double GetArea(){return (Garo*Sero);}	
			
		void Print(){
			cout<<"�簢���� ���� : "<<GetArea()<<endl;  //�굵 �����Լ� �������̵� 
		}
};


int main(void)
{
	CCircle Cir(1,1,1);
	CRect Rect(2,2,2,2);
	CShape *pSpe;
	
	pSpe=&Cir;
	pSpe->Print();
	
	pSpe=&Rect;
	pSpe->Print();
	
	return 0;
}
