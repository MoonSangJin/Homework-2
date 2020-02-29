#include <iostream>
using namespace std;
#define PI 3.14

class CCircle{
	protected:
		int x,y;
		double Radius;
		
	public:
		CCircle(int a,int b, double r) : x(a),y(b),Radius(r){
			cout<<"CCircle ������"<<endl;
		}	
		~CCircle(){
			cout<<"CCircle �Ҹ���"<<endl;
		}
		double GetArea(){
			return PI*Radius*Radius;
		}
};

class CSphere : public CCircle{
	private:
		int z;
	
	public:
		CSphere(int a,int b,int c, double r) : CCircle(a,b,r),z(c){
			cout<<"CSphere ������"<<endl;
		}	
		~CSphere(){
			cout<<"CSphere �Ҹ���"<<endl; 
		}
		double GetVolume(){
			return((4.0/3.0)*PI*Radius*Radius*Radius);
		}
		double GetArea(){
			return(4.0*PI*Radius*Radius);
		}
};



int main(void)
{
	CSphere Sph(1,1,1,1.0);
	
	cout<<"�ܸ���="<<Sph.CCircle::GetArea()<<endl;
	cout<<"ǥ����="<<Sph.GetArea()<<endl;
	cout<<"����="<<Sph.GetVolume()<<endl;
	
	return 0;
}
