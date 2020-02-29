#include <iostream>
#include <vector>
using namespace std;

void PlusVector(vector<int> &intV,int value,int pos) //&���� �� �����ض� �ֳĸ� ���� �ٲܶ� �� ��ü�� �ٷ� �ٲ����ϴϱ� 
{

	
	intV.insert(intV.begin()+pos,value);
	
}

void MinusVector(vector<int> &intV,int pos)
{

	
	intV.erase(intV.begin()+pos);
	
}

void PrintVector(vector<int> intV) //iter�� �ֽ�ĸ� ó������ ������ ����ؾ��ϴϱ� ����Ű�� ���� �ʿ��� 
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
		cout<<">> �޴� - �߰�(1), ����(2), ���(3), ����(0) : ";
		cin>>input;
		
		if(input==0)
			break;
		if(input==1)
		{
			cout<<"��, ��ġ(?��° ��) : ";
			cin>>value>>pos;
			PlusVector(intV,value,pos);
		}	
		if(input==2)
		{	
			cout<<"��ġ: ";
			cin>>pos;
			MinusVector(intV,pos);
		}
		if(input==3)
			PrintVector(intV);
						
	}
}
