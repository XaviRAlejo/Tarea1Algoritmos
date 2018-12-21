#include <iostream>
#include <vector>

using namespace std;

int antesQue(int x, int y) {
    return x < y;
 }

void Merge(vector<Avion> &A, int* temp, int izq, int der) {
    int i, i1, i2, med = (izq + der)/2;

    if (izq == der ) {
        return;
    }

    Merge(A, temp, izq, med);
    Merge(A, temp, med + 1, der);

    for (i = izq; i <= der; i++) {
        temp[i] = A[i];
    }
    i1 = izq;
    i2 = med + 1;

    for (i = izq; i <= der; i++) {
        if (i1 == med + 1) {
            A[i] = temp[i2++];
        }    
        else if ( i2 > der) {
            A[i] = temp[i1++];
        }
        else if ( antesQue(temp[i1], temp[i2]) ) {
            A[i] = temp[i1++];
        }
        else { 
            A[i] = temp[i2++];
        }       
    }     
}
