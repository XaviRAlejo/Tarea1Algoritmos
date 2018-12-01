#include <iostream>


using namespace std;

class Avion {
    
    int id; 
    float x;
    float y;

    public:   
        void init_avion(float code, float vertical, float horizontal);
        
};

void Avion::init_avion(float code, float vertical, float horizontal) {
    id = code;
    x = vertical;
    y = horizontal;
    cout << "El avion " << code << " se encuentra en las coordenadas: " << x << " , " << y << '\n';  

}