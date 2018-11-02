#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void print_vec(const vector<char> vec){
  for(int i=0; i < vec.size();i++){
    cout << vec[i] << "";
  }
  cout << '\n';
}

void coded(vector<char>& salida, string str){//Recorre el vector salida
  unsigned int x;
  for(x = 0; x < str.size(); x++){
    //auto it = salida.begin();
    salida.at(x) = '1';
  }
  print_vec(salida);
}

void recoded(vector<char>& deco,string linea,double perm, double busq, double nivel){
  double division = perm/(nivel+1);
  for(int i=0; i <= deco.size();i++){
    if (busq < division){
      deco.insert(deco.begin() + i, 1, linea[0]);
      if (linea.size() != 0){
        linea.erase(0, 1);
        cout << "nivel: " << nivel << "\n";
        cout << "div: " << division << "\n";
        cout << "i: " << i << "\n";
        recoded(deco,linea,perm,busq,nivel+1);
        return;
      }
      else{
        print_vec(deco);
        return;
      }
    }
    else
    {
      division += perm / (nivel + 1);
    }
  }
}

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
  string palabra;
  cin >> s;
  vector<char> str;
  double perm=0.0;
  double busq=0.0;
  int p = stoi(s); //stoi, convierte string a int
  //cout << s << '\n'; //print Numero de casos
  int x;
  for(x = 0; x < 2*p; x++){//recorre todas las lineas
    cin >> linea;
    if (x % 2 == 0){ //letras
      palabra = linea;
      cout << "linea: " << linea<< "\n";
      cout << "largo palabra: " << linea.length() << '\n';
      perm = factorial(linea.length());
      cout << "total permutacion: " << perm << "\n";
      str.insert(str.begin(),1,linea[0]);
      palabra.erase(0,1);
      //copy(linea.begin(), linea.end(), back_inserter(str));//Funcion que convierte el string en un vector, desde el inicio (begin), hasta el final (end)
      //coded(str,linea);
    }
    if (x % 2 != 0){ //permutacion que busco
      busq = stoi(linea);
      cout << "permutacion: " << busq << '\n';
      recoded(str, palabra, perm, busq, 1);
      str.clear();
    }
    cout << "\n";
  }
  return 0;
}
