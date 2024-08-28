#include <iostream>

using namespace std;


class mydata {

    int* var1 = new int;

    public:

    mydata (int);

    void strcmpA ();

    void stringA ();


};


// member funcitons

mydata::mydata (int t) { *var1 = t; }


void mydata::strcmpA () {

    cout << *var1;
}


void stringA (){



}