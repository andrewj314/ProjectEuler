//Problem 2: Find the sum of the even-numbered Fibonacci terms under four million

#include <iostream>
#include <vector>
using namespace std;

int sum = 0;
vector<int> fibonacci;

int main(){

  int count = 0;
  fibonacci.push_back(1);
  fibonacci.push_back(1);
  int i = 2;
  while(count < 4000000){
    count = fibonacci.at(i-1) + fibonacci.at(i-2);
    fibonacci.push_back(fibonacci.at(i-1) + fibonacci.at(i-2));
    if(fibonacci.at(i) % 2 == 0) sum += fibonacci.at(i);
    i++;
  }

  cout << "Sum = " << sum << "\n";

}
