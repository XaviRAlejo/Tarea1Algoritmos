#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "avion.cpp"

using namespace std;

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
        for (float i = 0; i < flota.size(); i++) {
            get_coordenadas(flota[i]);
        }
    }
  
    return 0;





}