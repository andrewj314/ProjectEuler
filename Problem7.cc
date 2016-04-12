//Problem 7: Find the 10,001st prime.

#include <iostream>
#include "math.h"

using namespace std;

bool isPrime(int num);

int main(){
  int count = 0;
  int i = 2;
  while(count < 10002){
    if(isPrime(i)){
      count++;
    }
    if(count == 10001){
      cout << "The 10,001st prime is " << i << "\n";
      break;
    }
    else ++i;
  }

}

bool isPrime(int num){
  bool flag = true;
  for(int i = 2; i <= sqrt(num); i++){
    if(num%i == 0) flag = false;
  }
  return flag;

}

