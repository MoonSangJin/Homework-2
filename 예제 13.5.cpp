#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int i;
	vector<int> intV(5);
	int *pV=&intV[0];
	
	for(i=0; i<5; i++)
	{
		cout<<"°ª ÀÔ·Â : ";
		cin>>(*pV);
		pV++;
	}
	pV=&intV[0];
	
	for(i=0; i<5; i++)
	{
		cout<<*pV<<"\t";
		pV++;
		
		}
		cout<<endl;	
		return 0;
}
