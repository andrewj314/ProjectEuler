//Problem 10: Find the sum of all primes below two million.

#include <iostream>
#include "math.h"

using namespace std;

bool isPrime(long num);

int main(){
  long sum = 0;
  for(long i = 4; i < 2e6; i++){
    if(isPrime(i)) sum+=i;
  }
  cout << "Sum = " << sum+5 << "\n";
}

bool isPrime(long num){
  bool flag = true;
  for(int i = 2; i <= sqrt(num); i++){
    if(num%i == 0) flag = false;
  }
  return flag;

}

