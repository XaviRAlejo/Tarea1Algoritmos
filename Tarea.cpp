#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  string linea;
  cin >> s;
  int p = stoi(s);//stoi, convierte string a int
  cout << s << '\n'; //Numero de casos
  int x;
  for(x = 0; x < p; x++){//recorre todas las lineas
    cin >> linea;
    cout << linea << '\n';
  }
  return 0;
}
