#include <iostream>
using namespace std;

int main(void)
{
	int i;
	double d;
	
	cout<<"10진수 입력 : ";
	cin>>i;
	
	cout<<"10진수 : "<<i<<endl;
	cout.unsetf(ios_base::dec);  // 10진수 해제 (디폴트가 10진수라서) 
	cout.setf(ios_base::hex);  // 16진수 설정 
	cout<<"16진수 : "<<i<<endl;
	
	cout.unsetf(ios_base::hex);  // 16진수 해제 
	cout.setf(ios_base::oct); // 8진수 설정
	cout<<"8진수  "<<i<<endl<<endl; 
	
	cout<<"실수 입력 : ";
	cin>>d;
	
	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout<<"과학적 표기 : "<<d<<endl;
	
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout<<"부동 소수점 표기 : "<<d<<endl;
}
