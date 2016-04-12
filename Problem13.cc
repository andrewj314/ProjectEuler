//Problem 13: Find the first ten digits of the sum of these 100 50-digit numbers.

#include <iostream>
#include <fstream>
#include <string>
#include "math.h"
#include <vector>

using namespace std;



int main(){
    vector<int> sumVector;
    int num;
    int sum;
    string line;
    ifstream numFile ("BigNumbers.txt");
    for(int i = 1; i < 51; i++){
        sum = 0;
        if(numFile.is_open()){
            while(getline(numFile,line)){
                num = (int)(line.at(line.length()-i) - '0');
                cout << "num = " << num << "\n";
                sum += num;
            }
            cout << sum << "\n";
            sumVector.push_back(sum);
        }
        numFile.clear();
        numFile.seekg(0, ios::beg);
    }
    numFile.close();
    reverse(sumVector.begin(), sumVector.end());
    for(int j = 0; j < sumVector.size(); j++) cout << sumVector.at(j) << " ";

    for(int k = 1; k < sumVector.size(); k++){
        int temp = sumVector.at(sumVector.size()-k);
        sumVector.at(sumVector.size()-k) = temp%10;
        sumVector.at(sumVector.size()-k-1) += temp/10;
    }
    cout << "\n";
    for(int l = 0; l < sumVector.size(); l++) cout << sumVector.at(l) << " ";

    return 0;

}

