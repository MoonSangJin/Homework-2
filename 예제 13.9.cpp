#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int i;
	vector<int> intV(5);
	vector<int>::iterator f_iter=intV.begin();
	vector<int>::reverse_iterator r_iter;
	
	for(i=0; i<5; i++)
	{
		*f_iter=i;
		f_iter++;
	}//내용값 입력 
	
	for(r_iter=intV.rbegin(); r_iter!=intV.rend(); r_iter++)
	{
		cout<<*r_iter<<" ";
	}
}
