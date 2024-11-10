#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){

    int valor, cem = 0,cinquenta = 0,vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

    cin >> valor;

    int X = valor;
    
    while(valor >= 100){
        valor = valor - 100;
        cem++;
    }
    while(valor >= 50){
        valor = valor - 50;
        cinquenta++;
    }
    while(valor >= 20){
        valor = valor - 20;
        vinte++;
    }
    while(valor >= 10){
        valor = valor - 10;
        dez++;
    }
    while(valor >= 5){
        valor = valor - 5;
        cinco++;
    }
    while(valor >= 2){
        valor = valor - 2;
        dois++;
    }
    while(valor >= 1){
        valor = valor - 1;
        um++;
    }

    cout << X << endl;
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cinquenta << " nota(s) de R$ 50,00" << endl;
    cout << vinte << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinco << " nota(s) de R$ 5,00" << endl;
    cout << dois << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;



    return 0;
}