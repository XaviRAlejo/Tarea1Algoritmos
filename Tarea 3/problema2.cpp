#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<iostream>


using namespace std;


double Lis(vector<int>& arreglo){
    vector<int> array(arreglo.size());
    array[0]=1;
    for(int i = 1 ; i < arreglo.size() ; i++){
        array[i]=1;
        for(int j = 0 ; j < i ; j++){
            array[i] = (arreglo[i] > arreglo[j] && array[i] < (array[j]+1)) ? array[i]+1: array[i];
        }
    }
    double maximo = *max_element(array.begin(),array.end());
    return arreglo.size() - maximo;
}


int main(int argc, char const *argv[]){

}