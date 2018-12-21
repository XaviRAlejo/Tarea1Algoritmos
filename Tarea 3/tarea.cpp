#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const* argv[]) {
    int cantidad;
    int num;
    while (cin >> cantidad) {
        vector<int> secuencia;
        for (int i = 0; i < cantidad; i++) {
            cin >> num;
            secuencia.push_back(num);
        }

        for (float j = 0; j < secuencia.size(); j++){
            cout << secuencia[j] << '\n';
        }
        cout << '\n';
    }    
    return 0;
}
