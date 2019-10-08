//
//https://www.learncpp.com/cpp-tutorial/610-pointers-and-const/
//

#include <iostream>
using namespace std;

void funcRef(int &arg) {
    arg = 1;
}

int main(){
    int val = 5;
    const int cVal = 5;
    //const int value = 5;
    //const int *ptr = &value; // this is okay, ptr is a non-const pointer that is pointing to a "const int"
    //*ptr = 6; // not allowed, we can't change a const value

    funcRef(val);
    funcRef(cVal);

    cout << "val" << val << endl;
    cout << "cVal" << cVal << endl;
}

