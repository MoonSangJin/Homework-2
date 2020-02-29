#include <iostream>
using namespace std;

class CCircle{
	private :
		double Radius;
		const double PI;
		
	public :
		CCircle(double r=0) : Radius(r), PI(3.14){
		}	
		
		void SetRadius(double r){Radius=r;
		}
		void yaho() const {cout<<"yaho"<<endl;
		}
		double GetArea() const {return (PI*Radius*Radius);}
};


int main(void)
{
	const CCircle Cir1(5);
	cout<<"¸éÀû : "<<Cir1.GetArea()<<endl;

	Cir1.yaho();
	return 0;
}
