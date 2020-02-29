#include <iostream>
#include <complex>
using namespace std;

int main(void)
{
	complex<double> comp1(1.0,2.0);
	complex<double> comp2(3.0,4.0);
	
	cout<<"+ : "<<comp1 + comp2<<endl;
	cout<<"- : "<<comp1 - comp2<<endl;
	cout<<"* : "<<comp1 * comp2<<endl;
	cout<<"/ : "<<comp1 / comp2<<endl;
	
	return 0;
 } 
