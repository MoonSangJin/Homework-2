#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> my;
	int value,check;
	
	while(1)
	{
		cout<<"값, 위치(0:앞, 1:뒤) 입력 : ";
		cin>>value>>check;
		 
		if(value==0 && check==0)
			break;	 
		if(check==0)
			my.push_front(value);
		else if(check==1)
			my.push_back(value);
		
	}
	cout<<"첫 번째 원소의 값 : "<<my.front()<<endl;
	cout<<"마지막 원소의 값 : "<<my.back()<<endl;
	
	
} 
