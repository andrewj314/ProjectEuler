//Problem 5: Find the least common multiple of integers 1-20.

#include <iostream>


using namespace std;


int main(){

  long i = 20;
  long product = 20*19*18*17*16*15*14*13*12*11;
  while(i < product){
    if(i%20 == 0 && i%19 == 0 && i%18 == 0 && i%17 == 0 && i%16 == 0 && i%15 == 0 && i%14 == 0 && i%13 == 0 && i%12 == 0 && i%11 == 0) break;
    else i++;
  }
  cout << i;
}



