#ifndef AVIONES
#define AVIONES

#include <iostream>


using namespace std;

class Avion {
    public:  
        int id; 
        float x;
        float y; 
        void init_avion(float code, float vertical, float horizontal);
        void get_coordenadas(Avion avion);
};

void Avion::init_avion(float code, float vertical, float horizontal) {
    id = code;
    x = vertical;
    y = horizontal;
    //cout << "El avion " << code << " se encuentra en las coordenadas: " << x << " , " << y << '\n';  

}
void get_coordenadas(Avion avion) {
    cout << "(" << avion.x << " , " << avion.y << ")" << '\n';
}


#endif