//Problem 6: Find the difference between the squared sum and sum of squares (variance, kinda!) of the first 100 natural numbers.

#include <iostream>


using namespace std;


int main(){
  long simpleSum = (100*101)/2;
  long squareSum = 0;
  for(int i = 1; i <= 100; i++) squareSum+=i*i;
  cout << simpleSum*simpleSum - squareSum << "\n";
}



