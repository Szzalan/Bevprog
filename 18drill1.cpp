#include "std_lib_facilities.h"

int const arsize = 10;
int ga[arsize] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int t[], int n) {
    const int length = 10;
    int la[length];

    for (int i = 0; i < length; ++i){
        la[i] = ga[i];
        cout << la[i] << ", ";
    }
    cout << endl;

///////////////////////////////////////////////////
    int* p = new int[n];
    for (int i = 0; i < n; ++i){
        p[i] = t[i];
        cout << p[i] << ", ";
    }
    cout << endl;
    delete[] p;
}

/////////////////////////////////////////////////
int main(){
    f(ga,arsize);

    int aasize = 10;
    int aa[aasize];
    aa[0] = 1;
    for(int i = 1; i < aasize; i++){
        aa[i] = ((i+1)*aa[i-1]);
    }
    f(aa, aasize);

    return 0;
}