#include <iostream>
using namespace std;

int main(void)
{
	char str[80];
	
	cout<<"���ڿ� �Է� : ";
	cin.getline(str, 80, '*');
	cout<<"���� ���ڴ� : "<<(char)cin.get()<<endl;
	
	while((cin.get())!='\n');
	
	cout<<"���ڿ� �Է� : ";
	cin.get(str,80,'*');
	cout<<"���� ���ڴ� : "<<(char)cin.get()<<endl;
	
	
	return 0;
}
