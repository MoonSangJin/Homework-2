#include <iostream>
using namespace std;

int main(void)
{
	char ch;
	
	cin.get(ch);
	
	while(!cin.eof()){
		cout.put(ch);
		ch=cin.get();
	}
	
	return 0;
}
