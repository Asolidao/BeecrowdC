#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double valor;
    cin >> valor;
    
    // Multiplicando o valor por 100
    int valorInt = static_cast<int>(valor * 100); 


    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0;
    int um = 0, Cinquenta_cent = 0, Vinte_e_cinco = 0, Dez_cent = 0, Cinco_cent = 0, Um_cent = 0;

    // Decompor em notas de 100, 50, 20, 10, 5, 2
    while (valorInt >= 10000) {  
        valorInt -= 10000;
        cem++;
    }
    while (valorInt >= 5000) {  
        valorInt -= 5000;
        cinquenta++;
    }
    while (valorInt >= 2000) { 
        valorInt -= 2000;
        vinte++;
    }
    while (valorInt >= 1000) {  
        valorInt -= 1000;
        dez++;
    }
    while (valorInt >= 500) {  
        valorInt -= 500;
        cinco++;
    }
    while (valorInt >= 200) {  
        valorInt -= 200;
        dois++;
    }

    // Decompor em moedas de 1, 0.50, 0.25, 0.10, 0.05, 0.01
    while (valorInt >= 100) {  
        valorInt -= 100;
        um++;
    }
    while (valorInt >= 50) {  
        valorInt -= 50;
        Cinquenta_cent++;
    }
    while (valorInt >= 25) {  
        valorInt -= 25;
        Vinte_e_cinco++;
    }
    while (valorInt >= 10) {  
        valorInt -= 10;
        Dez_cent++;
    }
    while (valorInt >= 5) {  
        valorInt -= 5;
        Cinco_cent++;
    }
    while (valorInt >= 1) {  
        valorInt -= 1;
        Um_cent++;
    }


    cout << "NOTAS:" << endl;
    cout << cem << " nota(s) de R$ 100.00" << endl;
    cout << cinquenta << " nota(s) de R$ 50.00" << endl;
    cout << vinte << " nota(s) de R$ 20.00" << endl;
    cout << dez << " nota(s) de R$ 10.00" << endl;
    cout << cinco << " nota(s) de R$ 5.00" << endl;
    cout << dois << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << um << " moeda(s) de R$ 1.00" << endl;
    cout << Cinquenta_cent << " moeda(s) de R$ 0.50" << endl;
    cout << Vinte_e_cinco << " moeda(s) de R$ 0.25" << endl;
    cout << Dez_cent << " moeda(s) de R$ 0.10" << endl;
    cout << Cinco_cent << " moeda(s) de R$ 0.05" << endl;
    cout << Um_cent << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
