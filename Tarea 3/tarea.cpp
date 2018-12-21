#include<stdio.h>
#include<cstdlib>
#include<iostream>
#include<string.h>
#include<fstream>
#include<dirent.h>
using namespace std;

//cago todo por que lo haras en python pero igual

void francuito(){
    DIR *pDIR;
    ofstream myfile;
    int i;
    float Evals;
    float Time;
    vector<float> Tests;
    list x;
    struct dirent *entrada;
    if (pDIR=opendir("path")){ //abrir un directorio
        while(entrada = readdir(pDIR)){ //mientras hay archivos en el directorio
            i=0;
            if (strcmp(entrada->d_name,".") != 0 && strcmp(entrada->d_name, ".") != 0 ){
                myfile.open(entrada->d_name); //abrir el archivo de la iteracion
                for (linea in myfile){ //recorrer archivo por linea
                    linea.split( ";" ); //hacer split de la linea por ;
                    if (i>0){           //for para sumar y determinar el promedio
                        Evals += linea[0];
                        Time += linea[1];
                    }
                    i++;
                }
                Evals = Evals/(i-1);   //no estoy seguro del i-1, pero la idea es calcular el promedio
                Time = Time/(i-1);


            }


        }
    }
}
