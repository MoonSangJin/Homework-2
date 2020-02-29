#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b)
{
	T temp=a;
	a=b;
	b=temp;
}

int main(void)
{
	int num1=10,num2=20;
	char num3='a',num4='b';
	double num5=1.1, num6=2.2;
	
	Swap(num1, num2);
	Swap(num3, num4);
	Swap(num5, num6);
	
	cout<<num1<<" "<<num2<<endl;
	cout<<num3<<" "<<num4<<endl;
	cout<<num5<<" "<<num6<<endl;
}
