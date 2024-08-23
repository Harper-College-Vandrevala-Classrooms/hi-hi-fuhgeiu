#include <iostream>
#include <cassert>

using namespace std;


//int strcmp_case_insensitive (vector <char> *input3,vector <char> *input4) {
//
//    if (input.size() == input2.size()) {
//
//
//
//
//    }
//
//    else return -1;
//}


void prepare (vector <char> *input3, vector <char> *input4) {

//    for (int i = 0; i < input.size(); i++) {
//
//        if (input[i] == ' ') input.erase(i);
//    }
//
//    for (char c: input) cout << c;

}


void get_user (vector <char> * input3,vector <char> * input4) {

    string input;                                     // temp variable to store char

    cout << "\nenter first string\n";                 // prompt
    getline (cin, input);                       // get user input

    for (char c:input){

        if (c != ' ') {
            input3->push_back(input[c]);
        }
    }

    cout << "enter second string\n";                  // prompt
    getline (cin, input);                      // get user input
}