#include <iostream>
#include <cassert>

using namespace std;


int strcmp_case_insensitive (string input,string input2) {

    if (input.size() == input2.size()) {




    }

    else return -1;
}


void prepare (string input, string input2) {

    for (int i = 0; i < input.size(); i++) {

        if (input[i] == ' ') input.erase(i);
    }

//    for (char c: input2){
//
//        if (c == ' ') input2.erase(c);
//    }

    for (char c: input) cout << c;

}


void get_user (string &input,string &input2) {

    cout << "\nenter first string\n";                 // prompt
    getline (cin, input);                       // get user input

    cout << "enter second string\n";                  // prompt
    getline (cin, input2);                      // get user input
}