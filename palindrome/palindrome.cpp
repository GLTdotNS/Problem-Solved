#include <algorithm>
#include <iostream>
#include <string.h>
#include <iostream>
#include <stdbool.h>
using namespace std;


 bool longestPalindrome(int s) {

        string num = std::to_string(s);
        bool isTrue = false;
        reverse(num.begin() , num.end());
        
        if(num == std::to_string(s)){

            isTrue = true;
        }
      


     
            return isTrue;
    }




int main()
{
cout<<longestPalindrome(121);
return 0;
}
