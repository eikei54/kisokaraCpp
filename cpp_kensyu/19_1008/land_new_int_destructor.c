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
        wid = p.wid;
        len = p.len;
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
}


int main(){
    Land *pLand;
    pLand = new Land();

    pLand->get();
    delete pLand;

    return 0;
}



