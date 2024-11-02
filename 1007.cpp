#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A, B, C, D; 
    cout<<setprecision(0)<<fixed;
    cin >> A >> B >> C >> D;
    
    cout << "DIFERENCA = " << ((A * B)-(C * D))<<  endl;;
    
    return 0;
}

