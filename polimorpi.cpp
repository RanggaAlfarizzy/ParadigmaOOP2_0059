#include <iostream>
using namespace std;

class Seseorang {
public:
    //virtual void pesan() = 0;
    virtual void pesan(){
        cout <<"Pesan dari seseorang"<<endl;
    }
};

class joko :public Seseorang{
public:
    void pesan(){
            cout<<"pesan dari joko"<< endl;
    }
};


class lia :public Seseorang {
public:
    void pesan() {
        cout <<"pesan dari lia" << endl;
    }
};

int main (){
    Seseorang * obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek ->pesan();
    obyek = &b;
    obyek ->pesan();
    // a.seseorang:: pesan();
    // b.seseorang:: pesan();

    return 0;
}