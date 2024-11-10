#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){

    int X, horas, minutos, segundos;
    
    cin >> X;
    
    horas = X / 3600;
    minutos = (X % 3600) / 60;
    segundos = X % 60;
    
    cout << horas << ':' << minutos << ':' << segundos << endl;
    
    return 0;
}