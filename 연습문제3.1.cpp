#include <iostream>
using namespace std;

#define Abs(X) (X>0?X:-X)


inline int Abs(int X)

{

        if (X > 0)

               return X;

        else

               return -X;

}

 

int main(void)

{

        cout << "°á°ú:" << Abs((-2 + 4)) << endl;

        return 0;

}
