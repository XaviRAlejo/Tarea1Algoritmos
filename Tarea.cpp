#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

double factorial(double n){
  double fact;
  if (n==1 || n==0){
    return 1;
  }
  else{
    fact = n*factorial(n-1);
  }
  if (fact >= pow(2,64)-1 ){
    return (pow(2,64) - 1);
  }
  else{
    return fact;
  }
}

int main(int argc, char const *argv[]) {
  string s;
  string linea;
  cin >> s;
  double perm=0.0;
  double busq=0.0;
  int p = stoi(s); //stoi, convierte string a int
  //cout << s << '\n'; //print Numero de casos
  int x;
  for(x = 0; x < 2*p; x++){//recorre todas las lineas
    cin >> linea;
    if (x % 2 == 0){ //letras
      cout << "letra 0: " << linea[0]<< "\n";
      cout << "largo palabra: " << linea.length() << '\n';
      perm = factorial(linea.length());
      cout << "total permutacion: " << perm << "\n";
    }
    if (x % 2 != 0){ //permutacion que busco
      busq = stoi(linea);
      cout << "permutacion: " << busq << '\n';
    }
  }
  return 0;
}
