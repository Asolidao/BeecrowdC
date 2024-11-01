#include<iostream>
#include<iomanip>
   
using namespace std;

int main()
{
    double raio; 
    
    cin >> raio;
    cout<<setprecision(4)<<fixed;
    cout << "A=" << 3.14159*raio*raio <<  endl;;
    
    return 0;
}

