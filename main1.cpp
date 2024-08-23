#include <iostream>
#include <cassert>
#include "functions.cpp"

using namespace std;

// to compare strings
int strcmp_case_insensitive (string,string);
// to get rid of blank spaces
void prepare (string,string);
// to get strings
void get_user (string &,string &);


int main () {

    string input;
    string input2;

    while (input != "q") {                      // loop for multiple comparisons

        get_user();                          // get user inputs

        prepare(input, input2);                         // prepare by removing blanks

        assert("thefrog" == prepare("the frog", ));

        cout << strcmp_case_insensitive(input,input2);   // return value for matching
    }
}


// get user inputs
// remove all balnk spaces
// compare each character of string
//  return values for each comparision result
