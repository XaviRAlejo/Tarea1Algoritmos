#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "avion.cpp"

using namespace std;

float dist(Avion A1, Avion A2){
    cout << "x: " << A1.x  << " , " << "y: " << A1.y << '\n';
    return sqrt((A1.x - A2.x)*(A1.x - A2.x) + (A1.y - A2.y)*(A1.y - A2.y));
}

void cercanos(vector<Avion>& flota, int ini, int fin){
    int tam = (fin-ini+1)/2;
    int mitad;
    mitad = (tam % 2 == 0)? tam: tam+1;
    cout << "inicio: " << ini << " fin: " << fin << "\n";
    if (tam == 1){
        cout << "quedan 2\n";
        return;
    }
    cercanos(flota, ini, mitad);
    cercanos(flota, mitad+1, fin);
}

int main(int argc, char const *argv[]) {
    float s;
    Avion gumi;
    float coord_x, coord_y;

    while(cin >> s) {
        vector<Avion> flota;
        int id = 0; //le da un id de identificacion al avión
        for (int x = 0; x < s; x++) {
            id++;
            cin >> coord_x >> coord_y;
            gumi.init_avion(id ,coord_x, coord_y);
            flota.insert(flota.begin()+x, 1, gumi);

        }
        cercanos(flota, 1, flota.size());
        for (float i = 0; i < flota.size()-1; i++) {
            float hola = dist(flota[i],flota[i+1]);
            cout << "distancia: " << hola << "\n";
        }
    }
  
    return 0;





}