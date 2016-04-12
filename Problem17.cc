//Problem 17: Find the total number of letters used writing the numbers from one to one thousand in English

#include <iostream>
#include <fstream>
#include <string>
#include "math.h"
#include <map>
using namespace std;

int intToEnglish(int number);


int main(){

   int sum = 0;
   for(int i = 100; i < 101; i++) sum+=intToEnglish(i);
   cout << "Sum = " << sum << "\n";
   return 0;

}

int intToEnglish(int number){

  map<int, int> numberList;
  numberList[0] = 0;
  numberList[1] = 3;
  numberList[2] = 3;
  numberList[3] = 5;
  numberList[4] = 4;
  numberList[5] = 4;
  numberList[6] = 3;
  numberList[7] = 5;
  numberList[8] = 5;
  numberList[9] = 4;
  numberList[10] = 3;
  numberList[11] = 6;
  numberList[12] = 6;
  numberList[13] = 8;
  numberList[14] = 8;
  numberList[15] = 7;
  numberList[16] = 7;
  numberList[17] = 9;
  numberList[18] = 8;
  numberList[19] = 8;
  numberList[20] = 6;
  numberList[30] = 6;
  numberList[40] = 5;
  numberList[50] = 5;
  numberList[60] = 5;
  numberList[70] = 7;
  numberList[80] = 6;
  numberList[90] = 6;
  numberList[100] = 10;
  numberList[1000] = 11;



  
  if(number < 21) return numberList[number];
  else if(number < 30) return numberList[20] + numberList[number - 20];
  else if(number < 40) return numberList[30] + numberList[number - 30];
  else if(number < 50) return numberList[40] + numberList[number - 40];  
  else if(number < 60) return numberList[50] + numberList[number - 50];  
  else if(number < 70) return numberList[60] + numberList[number - 60];  
  else if(number < 80) return numberList[70] + numberList[number - 70];  
  else if(number < 90) return numberList[80] + numberList[number - 80];  
  else if(number < 100) return numberList[90] + numberList[number - 90];  
  else if(number < 200) return numberList[100] + numberList[1] + intToEnglish(number - 100);
  else if(number < 300) return numberList[100] + numberList[2] + intToEnglish(number - 200);
  else if(number < 400) return numberList[100] + numberList[3] + intToEnglish(number - 300);
  else if(number < 500) return numberList[100] + numberList[4] + intToEnglish(number - 400);
  else if(number < 600) return numberList[100] + numberList[5] + intToEnglish(number - 500);
  else if(number < 700) return numberList[100] + numberList[6] + intToEnglish(number - 600);
  else if(number < 800) return numberList[100] + numberList[7] + intToEnglish(number - 700);
  else if(number < 900) return numberList[100] + numberList[8] + intToEnglish(number - 800);
  else if(number < 1000) return numberList[100] + numberList[9] + intToEnglish(number - 900);
  else if(number == 1000) return numberList[1000];
}
