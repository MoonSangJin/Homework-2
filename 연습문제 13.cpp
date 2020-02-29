#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;




int main(void)
{
	vector<string> strV;
	vector<string>::iterator iter;
	
	strV.push_back("c++");
	strV.push_back("programming");
	strV.push_back("apple");
	strV.push_back("banana");	
	
	cout<<"<< Á¤·ÄÀü >>"<<endl;
	for(iter=strV.begin(); iter!=strV.end(); iter++)
		cout<<*iter<<endl;
		
	return 0;
}
