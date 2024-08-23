#include <iostream>
#include <vector>
#include "functions2.cpp"

using namespace std;

// to compare strings
int strcmp_case_insensitive (string,string);
// to get rid of blank spaces
void prepare (string,string);
// to get strings
void get_user (string &,string &);


int main () {

    vector<char> input3;
    vector<char> input4;

//    while (input != "q") {                      // loop for multiple comparisons

        get_user(&input3,&input4);                          // get user inputs

        prepare(&input3,&input4);                         // prepare by removing blanks

        for (char c:input3) cout << input3[c];

//        cout << strcmp_case_insensitive(&input3,&input4);   // return value for matching

//    }

}


// get user inputs
// remove all balnk spaces
// compare each character of string
//  return values for each comparision result
