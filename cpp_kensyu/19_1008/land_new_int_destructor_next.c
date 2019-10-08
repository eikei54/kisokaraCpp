//
//
//https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm
//
#include<iostream>
using namespace std;

class Land {
    private:
    int *wid;
    int *len;

    public:

    // copy constructor
    Land(const Land &p) {
        cout << "Called copy Constructor "<< endl;
        wid = new int;
        len = new int;
        *wid = *p.wid;
        *len = *p.len;
        cout << p.wid << "x" << p.len << endl;
    }

    Land(int w = 2, int l =3) {
        wid = new int;
        len = new int;
        *wid = w;
        *len = l;
    }
//    Land(int _wid=2, int _len=3) {
//        *wid = _wid;
//        *len = _len;
//    }
    ~Land() {
        cout << "Destructor was called" << endl;
    }


    void get(){
        cout << "wid: "<< *wid << "X len:" << *len << endl;
    }
};

void fun() {
    Land p1;
    Land p2(5);
    Land p3(7,8);
    Land p4(p4);

    p1.get();
    p2.get();
    p3.get();
    p4.get();
}


int main(){
    //Land *pLand;
    //pLand = new Land();

    //pLand->get();
    //delete pLand;

    fun();

    return 0;
}



