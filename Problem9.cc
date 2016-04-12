//Problem 9: Find the Pythagorean Triplet for which a + b + c = 1000.

#include <iostream>

using namespace std;


int main(){
  for(int a = 0; a < 999; a++){
    for(int b = a+1; b < 1000; b++){
      for(int c= b+1; c < 1001; c++){
        if(a*a + b*b == c*c && a + b + c == 1000) cout << a << " + " << b << " + " << c << " = " << a+b+c << " and " << a*a << " + " << b*b << " = " << c*c << " and their product is " << a*b*c << "\n";
      }
    }
  }
}

