//Problem 12: Find the first triangle number (n + n-1 + ... + 1) to have over 500 divisors.

#include <iostream>
#include "math.h"

using namespace std;

int numDivisors(long num);
long triangle(long i);

int main(){
  long number = 1;
  while(numDivisors(triangle(number)) < 500) number++;
  cout << "Triangle number " << triangle(number) << " has over 500 divisors\n";
}

int numDivisors(long num){
  int count = 0;
  for(int i = 1; i <= num; i++){
    if(num%i == 0) count++;
  }
  //cout << num << " has " << count << " divisors\n";
  return count;
}

long triangle(long i){
  if(i == 1) return 1;
  else return i + triangle(i-1);
}
