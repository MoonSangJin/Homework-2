#include <iostream>
#include <string>
using namespace std;

void Print(string &s1, string &s2, string title)
{
	cout<<title<<endl;
	cout<<"str1 : "<<s1<<endl;
	cout<<"str2 : "<<s2<<endl;	
}

int main(void)
{
	string str1="Hello! Programming";
	string str2="C++";
	Print(str1,str2,"<<Àû¿ëÀü>>");
	
	str1.insert(7,str2);
	Print(str1, str2, "<<insert>>");
	
	str1.swap(str2);
	Print(str1,str2,"<<swap>>");
	
	return 0;
}
