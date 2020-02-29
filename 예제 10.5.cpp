#include <iostream>
using namespace std;

template <class T> 
class CPoint{
	private:
		T x,y;
		
	public:
		CPoint(T a, T b) : x(a),y(b){
		}
		void Move(T a, T b){
			x+=a; y+=b;
		}
		void Print(){cout<<"("<<x<<","<<y<<")"<<endl;
		}
		
		template <class T2>
		friend ostream& operator<<(ostream &,CPoint<T2>&Po);
};
template <class T2>
ostream &operator<<(ostream &out,CPoint<T2>&Po)
{
	out<<Po.x<<Po.y<<endl;
	return out;
}
int main(void)
{
	CPoint<int> P1(1,2);
	CPoint<double> P2(1.1,2.2);
	
	cout<<P1<<P2;
	return 0;
}
