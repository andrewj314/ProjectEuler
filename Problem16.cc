//Problem 16: Find the sum of the digits of 2^1000 

#include <iostream>
#include <fstream>
#include <string>
#include "math.h"
#include <vector>

using namespace std;

string doubleString(string inString);
unsigned long stringSum(string inString);

int main(){

    string doubles = "1";
    for(int i = 0; i < 1000; i++){
      doubles = doubleString(doubles);
    }
    cout << "tostring method: " << to_string(pow(2, 1000)) << "\n";
    cout << "doubling method: " << doubles << "\n";
    string hey = to_string(pow(2,1000));
    size_t pos = hey.find(".");
    string listen = hey.substr(0, pos);
    cout << "The sum of 2^1000 = " << stringSum(listen) << "\n";
    cout << "The sum of 2^1000 = " << stringSum(doubles) << "\n";
    return 0;

}


//function to double a number (given as a string) and output the result as a string. Should work for arbitarily large numbers.
string doubleString(string inString){

  string outString;

  //ones place is a special case since we don't need to look at the remainder from the sum of the previous place
  string onesPlace = (to_string((2*(inString.at(inString.length()-1)-'0'))%10));
  outString.append(onesPlace);

  //loop through interior of string, excluding ones place and highest place
  for(int i = 2; i < inString.length(); i++){
    outString.append(to_string((2*(inString.at(inString.length() - i)-'0') + 2*((inString.at(inString.length() - i + 1)-'0'))/10)%10));
  }

  //reverse string before summing final place
  reverse(outString.begin(), outString.end());

  //insert final place sum at beginning of string
  if(inString.length() > 1){ 
    outString.insert(0,to_string(2*(inString.at(0)-'0') + 2*((inString.at(1)-'0'))/10));
  }
  else outString.insert(0, to_string((2*(inString.at(0)-'0'))/10));
  return outString;

}

unsigned long stringSum(string inString){
 
  unsigned long theSum = 0;
  for(int i = 0; i < inString.length(); i++) theSum += inString.at(i)-'0'; 
  return theSum;

}

