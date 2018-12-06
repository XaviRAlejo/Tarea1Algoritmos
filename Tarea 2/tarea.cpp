#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "avion.cpp"
#include "Sort.cpp"
#include "funciones.cpp"

using namespace std;


int main(int argc, char const *argv[]) {
    float s;
    Avion gumi;
    float coord_x, coord_y;
    vector<int> min;

    while(cin >> s) {
        vector<Avion> flota;
        vector<Avion> minimos;

        int id = 0; //le da un id de identificacion al avión
        for (int x = 0; x < s; x++) {
            id++;
            cin >> coord_x >> coord_y;
            gumi.init_avion(id ,coord_x, coord_y);
            flota.insert(flota.begin()+x, 1, gumi);
            minimos.insert(minimos.begin() + x, 1, gumi);
        }
        Sortx(flota);
        Sortx(minimos);

        min = cercanos(flota, 1, flota.size());
        
        for (int i = 0; i<minimos.size();i++){
            if (minimos[i].id == min[0]){
                cout << minimos[i].x << "   " << minimos[i].y << "\n";
            }
            else if (minimos[i].id == min[1]){
                cout << minimos[i].x << "   " << minimos[i].y << "\n";
            }
        }
        cout << "\n";
        
        
    }
  
    return 0;
}
