#include <iostream>
using namespace std;

class CController;

class CCar{
	private :
		bool OnOff;
		int price;
		int speed;
		
	public :
		CCar(int p) : OnOff(false), price(p), speed(0) { cout<<"�θ��θ� �ڵ��� ����"<<endl;
		}	
		
		void PrintSpeed(){ cout<<"����ӵ� : "<<speed<<endl;
		}
		
		void SetPrice(CController &controller, int p);
		
		~CCar(){cout<<"�θ��θ� �ڵ��� �Ҹ�"<<endl;
		}
		friend class CController;
};

class CController{
	private :
		int price;
		
	public :
		CController(int p) : price(p){ cout<<"��� ������ ����"<<endl;
		}	
		
		void TurnOn(CCar &car){car.OnOff = true;
		}
		
		void TurnOff(CCar &car){car.OnOff = false;
		}
		
		void SpeedChange(CCar &car, int v){car.speed+=v;
		}
		
		~CController(){cout<<"��� ������ �Ҹ�"<<endl;
		}
		friend class CCar;
		
		friend void CCar::SetPrice(CController &controller, int p); 
};

void CCar::SetPrice(CController &controller, int p)
{
	controller.price = p;
}

int main(void)
{
	CCar MyCar(100);
	CController MyController(10);
	
	MyController.TurnOn(MyCar);
	MyController.SpeedChange(MyCar,5);
	MyCar.PrintSpeed();
	MyController.TurnOff(MyCar);
	
	return 0;
}
