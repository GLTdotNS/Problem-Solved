#include <algorithm>
#include <iostream>
#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <map>
using namespace std;



 int romanToInt(string s) {
    map<char , int> rti = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    int year = 0;
    for (int i = 0; i < s.length(); i++)
    {
       if(rti[s[i]] < rti[s[i + 1] ]){
            year -= rti[s[i]];
       }else{
        year += rti[s[i]];
       }
    }
    
        return year;
    }




int main()
{
cout<<romanToInt("MCMXCIV");
return 0;
}
