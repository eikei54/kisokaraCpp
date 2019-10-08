#include<iostream>
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
        cout << "wid: "<< wid << "X len:" << len << endl;
    }
};

int main(){
    Land *pLand;
    pLand = new Land();

    pLand->get();
    delete pLand;
}


