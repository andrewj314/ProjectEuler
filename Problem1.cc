//Problem 1: Find the sum of multiples of 3 or 5 below 1000
#include <iostream>

using namespace std;

int sum = 0;
int main(){
  for(int i = 0; i < 1000; i++){
    if(i % 3 == 0 || i % 5 == 0) sum += i;
  }
  cout << "Sum = " << sum << "\n";
}
