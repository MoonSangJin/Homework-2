#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CPoint{
	private :
		int x,y;
		
	public :
		CPoint(int a=0, int b=0) : x(a),y(b){
		}
		friend ostream &operator<<(ostream &out,CPoint &Po);
		friend bool Compare(const CPoint &Po1,const CPoint &Po2);
		bool operator<(CPoint &Po)
		{	
			
			return (x+y<Po.x+Po.y)? true : false;
		}
};

void PrintVector(vector<CPoint> intV,char *name)
{
	vector<CPoint>::iterator iter;
	
	cout<<">>"<<name<<" : ";
	for(iter=intV.begin(); iter!=intV.end(); iter++)
	{
		cout<<*iter<<" ";
		}	
		cout<<endl;
}

ostream &operator<<(ostream &out,CPoint &Po)
{
	out<<"("<<Po.x<<","<<Po.y<<")";
	return out;
}


bool Compare(const CPoint &Po1,const CPoint &Po2)
{
	if(Po1.y==Po2.y)
	return (Po1.x<Po2.x)? true:false;
	if (Po1.y<Po2.y)
	return true;
	else return false;
}


int main(void)
{
	vector<CPoint> intV(6);
	
	intV[0]=CPoint(5,3);
	intV[1]=CPoint(2,9);
	intV[2]=CPoint(1,1);
	intV[3]=CPoint(2,5);
	intV[4]=CPoint(3,7);
	intV[5]=CPoint(4,3);
	PrintVector(intV,"���� ��");
	
	sort(intV.begin(),intV.end(),Compare);
	PrintVector(intV,"���� ��");
	
	return 0;
}
