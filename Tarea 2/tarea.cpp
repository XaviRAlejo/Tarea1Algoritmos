#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "avion.cpp"

using namespace std;

int main(int argc, char const *argv[]) {
    string s;
    string linea;
    string palabra;
    cin >> s;
    Avion gumi;
    vector<Avion> flota;
    float coord_x, coord_y;
    int p = stoi(s);
    int id = 0;

    while(!s.empty()){
        for (int x = 0; x < 2*p; x++) {
        
            cin >> linea;
            if (x % 2 == 0) {
                coord_x = stof(linea);
            }
            else if (x % 2 != 0) {
                id++;
                coord_y = stof(linea);
                gumi.init_avion(id, coord_x, coord_y);
            }
        }
        cin >> s;
        p = stoi(s);
        id = 0;
        if (s.length() != 1){
            s = "";
        }
    }
  
    return 0;





}