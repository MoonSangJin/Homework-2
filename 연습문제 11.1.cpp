#include <iostream>
using namespace std;

int main(void)
{
	int i;
	double d;
	
	cout<<"10���� �Է� : ";
	cin>>i;
	
	cout<<"10���� : "<<i<<endl;
	cout.unsetf(ios_base::dec);  // 10���� ���� (����Ʈ�� 10������) 
	cout.setf(ios_base::hex);  // 16���� ���� 
	cout<<"16���� : "<<i<<endl;
	
	cout.unsetf(ios_base::hex);  // 16���� ���� 
	cout.setf(ios_base::oct); // 8���� ����
	cout<<"8����  "<<i<<endl<<endl; 
	
	cout<<"�Ǽ� �Է� : ";
	cin>>d;
	
	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout<<"������ ǥ�� : "<<d<<endl;
	
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout<<"�ε� �Ҽ��� ǥ�� : "<<d<<endl;
}
