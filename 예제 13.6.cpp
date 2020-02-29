#include <iostream>
#include <vector>
using namespace std; 
template <typename T>
class VectorIterator{
	private :
		T*ptr;
		
	public :
		VectorIterator(T*p=0) : ptr(p) {
		}
		T &operator*(){return (*ptr);
		}
		void operator++(int){ptr++;
		}
		void operator=(T *p){ptr=p;
		}
};

template <typename T>
class MyVector{
	private :
		T ary[5];
		
	public :
		typedef VectorIterator<T> iterator;
		T *begin(){return &ary[0];
		}	
};

int main(void)
{
	int i;
	MyVector<int> intV;
	MyVector<int>::iterator vlter(intV.begin());
	
	for(i=0; i<5; i++)
	{
		*vlter=i;
		vlter++;
	}
	
	vlter=intV.begin();
	for(i=0; i<5; i++)
	{
		cout<<*vlter<<endl;
		vlter++;
	}
	return 0;
	
	
	
	
}
