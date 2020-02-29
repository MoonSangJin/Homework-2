#include <iostream>
#include <cstring> 

using namespace std;

class CStudent{
	private :
		char name[20];
		int number;
		int age;
		
	public :
		CStudent(char *s,int a,int b){ strcpy(name,s); number=a; age=b;
		}	
		
		CStudent() {
		strcpy(name,"noname"); number=0; age=0;
		}
		
		void SetName(char *s1){strcpy(name,s1);
		}
		
		void SetNumber(int a1){number=a1;
		}
		
		void SetAge(int b1){age=b1;
		}
		
		void Print(){cout<<"이름 : "<<name<<endl<<"학번 : "<<number<<endl<<"나이 : "<<age<<endl; 
		}
}; 

int main(void)
{
	CStudent St1("홍길동", 11111111,25);
	CStudent St2;
	
	St1.Print();
	St2.Print();
	
	St2.SetName("이순신");
	St2.SetNumber(22222222);
	St2.SetAge(30);
	
	St2.Print();
}
