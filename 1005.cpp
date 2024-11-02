#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A, B; 
    cout<<setprecision(5)<<fixed;
    cin >> A >> B;
    
    cout << "MEDIA = " << ((A * 3.5) + (B * 7.5))/11.0 <<  endl;;
    
    return 0;
}

