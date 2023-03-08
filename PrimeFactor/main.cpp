#include <algorithm>
#include <iostream>
#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <vector>
#include <fmtmsg.h>
using namespace std;





 void PrimeFactor(long n)
{
    
    vector<int> primeFactors;
    for (int i = 3; i <= n; i += 2)
    {
        while (n % i == 0)
        {
            primeFactors.push_back(i);
            string iteration;
            iteration.append(to_string(i));
            cout<<iteration;
            n /= i;
        }

    }

    //int maxNum = primeFactors[primeFactors.capacity() - 1];
    
    
  // cout << f"Hello. My name is {{asd}}. I'm {age}.";
}

int main()
{
PrimeFactor(600851475143);;
return 0;
}
