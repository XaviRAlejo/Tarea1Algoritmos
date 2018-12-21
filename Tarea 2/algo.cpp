#include <iostream>
#include <stdlib.h>
#include "merge.cpp"
#include "avion.cpp"

using namespace std;

int main () {

    Avion B;
    vector<Avion> A;
    int uwu[10];

    for (int i = 0; i < 10; i++) {
        B.init_avion(i, rand()%100, rand()%100);
        A.push_back(B);

    }

    for (int j = 0; j < 10; j++ ) {
        cout << A[j].x << '\n';
    }

    cout << '\n';
    cout << '\n';
    cout << '\n';

    Merge(A, uwu, 0 , 9);

    for (int j = 0; j < 10; j++ ) {
        cout << A[j].x << '\n';
    }

    return 0;
}