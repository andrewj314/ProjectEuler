//Problem 20: Find the sum of the digits of 100!

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "math.h"
#include <map>
#include <vector>
using namespace std;

int main(){


  unsigned long long number = 1;

  for(int i = 1; i < 101; i++){
    if(i%100 == 0) continue;
    else if(i%25 == 0) number /= 4;
    else if(i%10 == 0) continue;
    else if(i%5 == 0) number /= 2;
    else number *= i;
    cout << number << "\n";
  }  
  cout << "Final number = " << number << "\n";

  return 0;
}
