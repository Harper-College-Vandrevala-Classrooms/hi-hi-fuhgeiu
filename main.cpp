#include <iostream>

using namespace std;

// to compare strings
int strcmp_case_insensitive (string *ptr,string input2) {

    cout << ptr[0];                                                // first get
    cout << input2[2];

}


// to get strings
void get_user (string *ptr,string *ptr1) {

    cout << "enter first string\n";                 // prompt

    getline (cin, *ptr);                     // get user input

    cout << "enter second string\n";                // prompt

    getline (cin, *ptr1);                     // get user input
}


int main () {

    string input;
    string input2;
    string* ptr = &input;                               // user input
    string* ptr1 = &input2;

    while (input != "q") {                      // loop for multiple comparisons

        get_user(ptr,ptr1);                          // get user inputs

        strcmp_case_insensitive(ptr,input2);

    }
}