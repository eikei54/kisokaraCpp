#include<stdio.h>

class Land {
    private:
    int wid;
    int len;
    friend Land operator+ (Land lho, Land rho);

    public:
    Land(int _wid=2, int _len=3) {
        wid = _wid;
        len = _len;
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

Land operator+ (Land lho, Land rho) {
    Land temp;
    temp.wid = lho.wid + rho.wid;
    temp.len = lho.len + rho.len;
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
    Land p4 = p1 * p2;
    p4.get();

    if (p4 > p2) {
        printf("p4 is bigger than p2\r\n");
    } else if (p4 < p2){
        printf("p4 is smaller than p2\r\n");
    } else {
        printf("p4 is Equal to p2\r\n");
    }

    return 0;
}
