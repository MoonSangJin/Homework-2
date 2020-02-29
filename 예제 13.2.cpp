#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int i,value;
	vector<int> intV;
	
	for(i=0; i<5; i++)
	{
		intV.resize(intV.size()+1);
		cin>>intV[i];
		
	}
	for(i=0; i<5; i++)
	{
		cout<<intV[i]<<"\t";
		
	}
	
 } 
