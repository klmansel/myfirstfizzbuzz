//The popular fizzbuzz problem. Print Fizz if num 1-100 % 3, Buzz if % 5, and FizzBuzz if both

#include <iostream>
using namespace std; 

int main()
{
  int fbcount = 0;

  while(fbcount < 100){
  fbcount++;
  
 if (fbcount % 15 == 0)
    cout << fbcount << " FizzBuzz\n"; 
  else if (fbcount % 3 == 0)
    cout << fbcount << " Fizz\n";
  else if (fbcount % 5 == 0)
    cout << fbcount << " Buzz\n";
 }//end of while loop statements
   return 0;
}

