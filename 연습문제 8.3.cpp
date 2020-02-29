#include <iostream>
using namespace std;

#define PI 3.14

class CPoint{
	protected :
		int x,y;
		
	public :
		CPoint(int a, int b) : x(a),y(b){
		}
		void Move(int c, int d){
			x+=c;
			y+=d;
		}
		
		void Draw(){
			cout<<"�߽� :";
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
};

class CCircle : public CPoint{
	private :
		double Radius;
		
	public : 
	
		CCircle(int a, int b, int c) : CPoint(a,b),Radius(c){
		}
		void Draw(){
			CPoint::Draw();
			cout<<"������ : "<<Radius<<endl;
		}	
	
		double GetArea(){
		return	(PI*Radius*Radius);
		}	
};

int main(void)
{
	 CPoint p(1, 1);

        p.Draw();

        p.Move(2, 2);

        p.Draw();

 

        CCircle c(1, 1, 3);

        c.Draw();

        c.Move(3, 3);

        c.Draw();

        cout << "���� ���̴�: " << c.GetArea() << endl;

        return 0;

}

