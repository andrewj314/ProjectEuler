//Problem 4: Find the largest palindromic product of two three digit numbers
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> numVector(int num);

int main(){
  int max = 0;
  bool palindrome;
  for(int i = 100; i < 1000; i++){
    for(int j = 100; j < 1000; j++){
      vector<int> product = numVector(i*j);
      palindrome = true;
      for(int k = 0; k < product.size()/2; k++){
        if(product.at(k) != product.at(product.size()-k-1)) palindrome = false;
      }
      if(palindrome == false) continue;
      if(i*j > max) max = i*j;
    }
  }
  cout << "Largest palindrome is " << max << "\n";
}


vector<int> numVector(int num){
  vector<int> dummyVector;
  while(num > 0){
    dummyVector.push_back(num % 10);
    num = num / 10;
  }
  reverse(dummyVector.begin(), dummyVector.end());
  return dummyVector;
}
