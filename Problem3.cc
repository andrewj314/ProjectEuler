//Problem 3: Find the largest prime factor of 600851475143
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


long num = 600851475143.;
int squareRoot = (int)sqrt(num);
vector<int> primeList;
int main(){
  for(int i = 2; i < squareRoot; i++){
    if(num % i == 0){
      primeList.push_back(i);
      num = num/i;
    }
  }
  cout << "Biggest prime = " << primeList.back() << "\n";
}
