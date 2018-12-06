#ifndef SORTS
#define SORTS
#include <iostream>
#include <vector>


void swap(vector<Avion> &flota, float g, float h) {
    Avion temp;
    temp = flota[g];
    flota[g] = flota[h];
    flota[h] = temp;
 }

void Sortx(vector<Avion> &flota) {
    float i, j;
    for (i = 0; i < (flota.size()); i++) {
        for (j = 0; j < (flota.size()); j++) {
            if (flota[i].x < flota[j].x) {
                swap(flota, i, j);
            }
            
        }
    }
}

void Sorty(vector<Avion> &flota)
{
    float i, j;
    for (i = 0; i < (flota.size()); i++)
    {
        for (j = 0; j < (flota.size()); j++)
        {
            if (flota[i].y < flota[j].y)
            {
                swap(flota, i, j);
            }
        }
    }
}

#endif