
#include <algorithm>
#include <iostream>
#include <string.h>
#include <iostream>
#include <stdbool.h>
using namespace std;


 int fibonacci(int n) {

    int Fn = 0;
    int Fn2 = 1;
    int Fnext = 0;
    int totalSum = 0;

    for (int i = 1; i <= n; i++)
    {
        Fnext = Fn + Fn2;
        Fn = Fn2;
        Fn2 = Fnext;

        if (totalSum + Fnext > 4000000)
        {
            totalSum += Fnext;
          
            break;
        }
        if (Fnext % 2 == 0)
        {
            totalSum += Fnext;
        }

    }
        
         return totalSum;
    }




int main()
{
cout<<fibonacci(100);
return 0;
}