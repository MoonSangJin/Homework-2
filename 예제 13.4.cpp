#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	int i;
	list<int> MyList;
	
	for(i=0; i<5; i++)
	{
		MyList.push_back(i+1);
	}
	cout<<MyList.front()<<endl;
	cout<<MyList.back()<<endl;
	
}
