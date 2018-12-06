#ifndef FUNCIONES
#define FUNCIONES
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "avion.cpp"
#include "Sort.cpp"
#include "funciones.cpp"
using namespace std;

float dist(Avion A1, Avion A2)
{
    return sqrt((A1.x - A2.x) * (A1.x - A2.x) + (A1.y - A2.y) * (A1.y - A2.y));
}


vector<int> cercanos(vector<Avion> &flota, int ini, int fin){
    float distance;
    vector <int> auxizq, auxder;
    int tam = (fin - ini + 1) / 2;
    int mitad;
    vector <int> dmin;
    vector <int> minimoa;
    vector <int> minimoa2;
    int minimo;
    mitad = (tam % 2 == 0) ? tam : tam + 1;
    if (tam == 1)
    {
        distance = dist (flota[ini-1], flota[fin-1]);
        dmin.insert(dmin.begin(),1,flota[ini-1].id);
        dmin.insert(dmin.begin()+1, 1, flota[fin - 1].id);
        return dmin;
    }
    auxizq = cercanos(flota, ini, mitad);
    auxder = cercanos(flota, mitad + 1, fin);
    minimoa = (dist(flota[auxizq[0]],flota[auxizq[1]]) < dist(flota[auxder[0]],flota[auxder[1]])) ? auxizq : auxder;
    vector<Avion> strip;
    int j=0;
    for (int i = 0; i < fin; i++){
        if( (abs(flota[i].x - flota[mitad].x)) < dist (flota[minimoa[0]],flota[minimoa[1]])){
            strip.insert(strip.begin() + j, 1, flota[i]);
            j++;
        }
    }
    Sorty(strip);
    minimo = dist(flota[minimoa[0]], flota[minimoa[1]]);
    for(int i = 0; i<strip.size();++i){
        for(int k= i+1; j < strip.size() && (strip[k].y - strip[i].y) < minimo; ++k){
            minimo = dist(flota[minimoa[0]], flota[minimoa[1]]);
            if ( dist(strip[i],strip[k]) < minimo){
                minimoa.insert(minimoa.begin(),1, strip[i].id);
                minimoa.insert(minimoa.begin()+1,1,strip[k].id);
                minimo = dist(flota[minimoa[0]], flota[minimoa[1]]);
            }
        }
    }

    return minimoa;
}




#endif