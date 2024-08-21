#include <iostream>

using namespace std;

// to compare strings
int strcmp_case_insensitive (string input,string input2) {

    if (input.size() == input2.size()) {




    }

    else return -1;
}

// to get rid of blank spaces
void prepare (string input, string input2) {




}


// to get strings
void get_user (string &input,string &input2) {

    cout << "\nenter first string\n";                 // prompt
    getline (cin, input);                       // get user input

    cout << "enter second string\n";                  // prompt
    getline (cin, input2);                      // get user input
}


int main () {

    string input;
    string input2;

    while (input != "q") {                      // loop for multiple comparisons

        get_user(input,input2);                          // get user inputs

        prepare(input, input2);                         // prepare by removing blanks

        cout << strcmp_case_insensitive(input,input2);   // return value for matching

    }
}


// get user inputs
// remove all balnk spaces
// compare each character of string
//  return values for each comparision result
