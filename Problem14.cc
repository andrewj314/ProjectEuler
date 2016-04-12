//Problem 14: Find the number under one million that produces the unsigned intest Collatz sequence 

#include <iostream>
#include <fstream>
#include <string>
#include "math.h"
#include <vector>

using namespace std;



int main(){
    unsigned int max = 0;
    unsigned int maxCollatz = 0;
    for(unsigned int i = 2; i <= 1000000; ++i){
        unsigned int counter = 0;
        unsigned int j = i;
        while(j != 1){
          if(j%2 == 0){
            j = j/2;
            counter++;
          }
          else{
            j = 3*j + 1;
            counter++;
          }
        }
        if(counter > max){ 
          max = counter;
          maxCollatz = i;
        }
    }
    cout << "MAX = " << max << "\n";
    cout << "MAX COLLATZ = " << maxCollatz << "\n";

    return 0;

}

