
#include <algorithm>
#include <iostream>
#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <vector>
using namespace std;


 
 int sumOfTheSquares() {
    int result = 0;
    int num = 0;
    for (int i = 1; i <= 100; i++)
    {
     num = i * i;
    result += num;
 
    }
    return result;

  
 }

 int SquareOfTheSum (){
  int squaredSum = 0;
  int sumOfNumbers = 0;

     for (int k = 0; k <= 100; k++)
    {
      
        sumOfNumbers += k; 
    }
 
    squaredSum = sumOfNumbers * sumOfNumbers;
    return squaredSum;
 }


int main()
{
cout<<SquareOfTheSum() - sumOfTheSquares();
}