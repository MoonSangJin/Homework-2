#include <iostream>
using namespace std;

template <typename T>
T Max(T *arr,int len)
{
	T Max=arr[0];
	for(int i=0; i<len; i++)
	{
		if(arr[i]>Max)
		
			Max=arr[i];
	}
	return Max;
}

int main(void)
{
	int ary1[4]={4,5,2,7};
	double ary2[5]={1.1,4.4,8.8,4.2,5.5};
	
	cout<<Max(ary1,4)<<endl;
	cout<<Max(ary2,5)<<endl;
	
	return 0;
 } 
