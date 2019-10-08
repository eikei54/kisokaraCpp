#include<stdio.h>

class Land {
    private:
    int wid;
    int len;
    friend Land operator+ (int wid, Land rho);

    public:
    Land(int _wid=2, int _len=3) {
        wid = _wid;
        len = _len;
    }

    Land operator+ (Land rho) {
        Land temp;
        temp.wid = this->wid + rho.wid;
        temp.len = this->len + rho.len;
        return temp;
    }
    Land operator* (Land rho) {
        Land temp;
        temp.wid = this->wid * rho.wid;
        temp.len = this->len * rho.len;
        return temp;
    }

    bool operator> (Land rho) {
        Land temp;
        int area1 = this->wid * this->len;
        int area2 = rho.wid * rho.len;

        if(area1 > area2){
            return 1;
        } else {
            return 0;
        }
    }
    bool operator< (Land rho) {
        Land temp;
        int area1 = this->wid * this->len;
        int area2 = rho.wid * rho.len;

        if(area1 < area2) {
            return 1;
        } else {
            return 0;
        }
    }
    bool operator== (Land rho) {
        Land temp;
        int area1 = this->wid * this->len;
        int area2 = rho.wid * rho.len;

        if(area1 == area2) {
            return 1;
        } else {
            return 0;
        }
    }

    void get(){
        printf("wid: %d X len: %d\r\n", wid, len);
    }
};

Land operator+ (int wid, Land rho) {
    Land temp;
    temp.wid = wid + rho.wid;
    temp.len = 3 + rho.len;
    return temp;
}

int main() {

    printf("Start land operator friend\r\n");
    Land p1;
    Land p2(6);
    Land p3(7,9);

    p1.get();
    p2.get();

    p3 = p1 + p2;
    p3.get();
    // 10 -> nameless object
    Land p4 = 10 + p1;
    p4.get();


    return 0;
}
