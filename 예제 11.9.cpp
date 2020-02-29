#include <iostream>
using namespace std;

int main(void)
{
	char str[80];
	
	cout<<"문자열 입력 : ";
	cin.getline(str, 80, '*');
	cout<<"다음 문자는 : "<<(char)cin.get()<<endl;
	
	while((cin.get())!='\n');
	
	cout<<"문자열 입력 : ";
	cin.get(str,80,'*');
	cout<<"다음 문자는 : "<<(char)cin.get()<<endl;
	
	
	return 0;
}
