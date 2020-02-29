#include <iostream>
using namespace std;

int main(void)
{
	cout.width(10);
	cout<<"hello"<<endl;
	cout.fill('%');
	cout.width(10);
	cout<<"hello"<<endl<<endl;
	
	cout.setf(ios::left,ios::adjustfield);
	cout.width(10);
	cout<<"hello"<<endl<<endl;
}
