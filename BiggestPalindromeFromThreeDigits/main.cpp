
#include <algorithm>
#include <iostream>
#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <vector>
using namespace std;


 vector<int> list;
 
 void function() {

    for (int i = 100; i <= 1000; i++)
    {
        int result = 0;
        for (int k = 100; k < 1000; k++)
        {
            result = i * k;
            string expression = to_string(result);
            string reversed = "";
            for (int j =  expression.length() - 1; j >= 0; j--)
            {
                reversed += expression[j];
                
            }
         if(expression == reversed){
            list.push_back(stoi(expression));
          
         }
            /* code */
        } 
    }
    int num = *max_element(list.begin() , list.end());
   cout<<num;
 }




int main()
{
function();

}