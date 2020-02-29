#include <iostream>
using namespace std;

class CShape{
	protected :
		int x,y;
		
	public :
		CShape(int a, int b) : x(a), y(b) {}
		void Move(int a, int b){x+=a; y+=b;}
		virtual void Print()=0; // 프린트함수를 가상함수로 만들어놨기 때문에 상속받은 애들이 재정의 즉 오버라이딩하면 본질이 아니라 가리키는 대로 정상작동함  그리고 순수 가상함수로 만듦으로써
		//CShape 객체가 생성되지 않고도 다른 클래스의 base 클래스로 추상 클래스를 할 수 있다. 
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
			cout<<"원의 면적 : "<<GetArea()<<endl;   //가상함수 오버라이딩 
		}
};


class CRect : public CShape{
	private :
		int Garo,Sero;
		
	public :
		CRect(int a, int b, int g, int s) : CShape(a,b), Garo(g), Sero(s) {}
		double GetArea(){return (Garo*Sero);}	
			
		void Print(){
			cout<<"사각형의 면적 : "<<GetArea()<<endl;  //얘도 가상함수 오버라이딩 
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
