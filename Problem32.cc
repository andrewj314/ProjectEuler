//Problem 32: Find the sum of all 1-9 pandigital product identities (multiplicands included).

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

bool contains(string identity, int digit);
bool pandigital(string theIdentity);

int main(){
    vector<unsigned long> products;
    stringstream terms;
    for(int i = 1; i < 10000; i++){
        for(int j = i; j < 10000; j++){
            terms << i;
 	    terms << j;
            terms << i*j; 
           // cout << "Terms = " << terms.str() << "\n";
	    if(j%1000000 == 0) cout << "i, j = " << i << j << "\n";
	    string termString = terms.str();
            if(termString.size() > 9){ 
              terms.str(string());
              continue;
            }
            if(pandigital(termString)){
              cout << "GOT ONE! It's " << i << "*" << j << " = " << i*j << "\n";
              if(find(products.begin(), products.end(), i*j) == products.end()) products.push_back(i*j);
            }
            terms.str(string());
        }
    }
    cout << "PANDIGITAL PRODUCTS\n";
    for(int k = 0; k < products.size(); k++) cout << products.at(k) << " ";
    cout << "\n";
    int sum = 0;
    for(int l = 0; l < products.size(); l++) sum+=products.at(l);
    cout << "SUM = " << sum << "\n";
   
    return 0;
}


bool contains(string identity, int digit){
    string c = to_string(digit);
    size_t found = identity.find(c);
    if(found != string::npos) return true;
    else return false;
   
}

bool pandigital(string theIdentity){
    bool flag = true;
    if(contains(theIdentity, 0)) flag = false;
    for(int i = 1; i < 10; i++){
        if(!contains(theIdentity, i)) flag = false;
    }
    return flag;
}

