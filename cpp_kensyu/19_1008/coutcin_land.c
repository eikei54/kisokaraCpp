#include <iostream>
using namespace std;


class Land {
    private:
    int wid;
    int len;

    public:

    Land(int _wid=2, int _len=3) {
        wid = _wid;
        len = _len;
    }
    void get(){
        cout << "wid:" << wid << " X len:" << len << "\n";
    }

    friend ostream& operator << (ostream &out, const Land &temp);
};

ostream & operator << (ostream &out, const Land &temp){
    out << temp.wid;
    out << "x" << temp.len;
    return out;
}

int main(){

    Land p1;
    Land p2(6);
    Land p3(7,9);

    //p1.get();
    //p2.get();
    int x;
    x = 100;

    cout << x << endl;

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;


}

