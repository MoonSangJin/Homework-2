#include <iostream>
#include <vector>
#include <list>
using namespace std;

void PrintVector(list<int> intV, char*name)
{
	list<int>::iterator iter;
	
	cout<<">>"<<name<<" : ";
	
	for(iter=intV.begin(); iter!=intV.end(); iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
}
int main(void)
{
	int i;
	list<int> intV1(5);
	list<int> intV2;
	list<int>::iterator iter= intV1.begin();
	
	for(i=0; i<5; i++)
	{
		*iter=i;
		iter++;
	}
	
	PrintVector(intV1,"intV1");
	PrintVector(intV2,"intV2");
	
	iter=intV1.begin();
	iter++; iter++; //liste라서 하나씩 해줘야됨
	intV1.insert(iter,100);
	intV1.insert(intV1.end(),101);
	PrintVector(intV1,"intV1");
	
	iter=intV1.begin();
	iter++; iter++;
	intV1.erase(iter);
	PrintVector(intV1,"intV1");
	
	intV2=intV1;
	PrintVector(intV2,"intV2");
	if(intV1==intV2)
	{
		cout<<"intV1과 intV2는 동일하다 "<<endl;
	}
	 
	
	
 } 
