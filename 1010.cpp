#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    int peca1, peca2,quan1,quan2;
    double valor1,valor2;
    
    cout<<setprecision(2)<<fixed;
    cin >> peca1 >> quan1 >> valor1;
    cin >> peca2 >> quan2 >> valor2;

    cout << "VALOR A PAGAR: R$ " << ((valor1 * quan1)+(valor2 * quan2)) << endl;

    return 0;
}
