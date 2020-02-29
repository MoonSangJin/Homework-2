#include <iostream>
#include <vector>
using namespace std;

class CPoint{
	private :
		int x,y;
		
	public :
		CPoint(int a=0, int b=0) : x(a), y(b) {}
		friend ostream &operator<<(ostream &os,CPoint &Po);	
		void Print(){
			cout<<x<<","<<y<<endl;
		} 
};

ostream &operator<<(ostream &os,CPoint &Po)
{
	os<<"("<<Po.x<<","<<Po.y<<")"<<endl;
	return os;
}

int main(void)
{
	int x,y;
	int count=0;
	vector<CPoint> intV;
	
	while(1)
	{
	
	cout<<"ÁÂÇ¥ x, y ÀÔ·Â : ";
	cin>>x>>y;
	if(x==0 && y==0)
		break;
	intV.push_back(CPoint(x,y));	
	count++;
	}
	
	for(int i=0; i<count; i++)
	{
		intV[i].Print();
	}
}
