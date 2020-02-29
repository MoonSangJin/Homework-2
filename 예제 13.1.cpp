 #include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int i;
	vector<int> intV(5);
	
	for(i=0; i<5; i++)
	{
		cin>>intV[i];
	}
	
	intV[2]=100;
	
	for(i=0; i<5; i++)
	{
		cout<<intV[i]<<"\t";
	}
}

