#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> my;
	int value,check;
	
	while(1)
	{
		cout<<"��, ��ġ(0:��, 1:��) �Է� : ";
		cin>>value>>check;
		 
		if(value==0 && check==0)
			break;	 
		if(check==0)
			my.push_front(value);
		else if(check==1)
			my.push_back(value);
		
	}
	cout<<"ù ��° ������ �� : "<<my.front()<<endl;
	cout<<"������ ������ �� : "<<my.back()<<endl;
	
	
} 
