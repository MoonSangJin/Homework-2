#include <iostream>
#include <vector>
#include <string>
using namespace std;

void PrintVector(vector<int> intv,string name)
{
	vector<int>::iterator iter;
	for(iter=intv.begin(); iter!=intv.end(); iter++)
		{
		cout<<name<<" : "<<*iter<<"   ";
	}cout<<endl;	
}

int main(void)
{
	int i,value;
	vector<int> intV1(5);
	vector<int> intV2;
	vector<int>::iterator iter=intV1.begin();
	
	for(i=0; i<5; i++)
	{
		*iter=i;
		iter++;
	}
	
	while(1){
		cin>>value;
		if(value==99)
			break;
		else
			intV2.push_back(value);
	}
	
	
	PrintVector(intV1, "intV1");
	PrintVector(intV2, "intV2");
	
	intV1.insert(intV1.begin()+2, 100);
	intV1.insert(intV1.end(), 101);
	PrintVector(intV1, "intV1");
	intV1.erase(intV1.begin()+2);
	PrintVector(intV1, "intV1");
	
	/*intV2=intV1;*/
	PrintVector(intV2, "intV2");
	if(intV1==intV2)
	{
		cout<<"intV1과 intV2는 동일하다 "<<endl;
	}
	
	return 0;
}
