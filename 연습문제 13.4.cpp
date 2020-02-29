#include <iostream>
#include <vector>
using namespace std;

void PlusVector(vector<int> &intV,int value,int pos) //&적는 거 생각해라 왜냐면 값을 바꿀때 그 자체가 바로 바뀌어야하니까 
{

	
	intV.insert(intV.begin()+pos,value);
	
}

void MinusVector(vector<int> &intV,int pos)
{

	
	intV.erase(intV.begin()+pos);
	
}

void PrintVector(vector<int> intV) //iter을 왜썼냐면 처음부터 끝까지 출력해야하니까 가리키는 놈이 필요함 
{
	vector<int>::iterator iter;
	for(iter=intV.begin(); iter!=intV.end(); iter++)
	{
		if((*iter)!=0) 
		cout<<*iter<<" ";
	}
	cout<<endl;
}
int main(void)
{
	vector<int> intV(10);
	int input,value,pos;
	
	while(1)
	{
		cout<<">> 메뉴 - 추가(1), 삭제(2), 출력(3), 종료(0) : ";
		cin>>input;
		
		if(input==0)
			break;
		if(input==1)
		{
			cout<<"값, 위치(?번째 앞) : ";
			cin>>value>>pos;
			PlusVector(intV,value,pos);
		}	
		if(input==2)
		{	
			cout<<"위치: ";
			cin>>pos;
			MinusVector(intV,pos);
		}
		if(input==3)
			PrintVector(intV);
						
	}
}
