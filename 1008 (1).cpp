#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int A, B;
    double C; 
    cout<<setprecision(2)<<fixed;
    cin >> A >> B >> C;

    cout << "NUMBER = " << A << endl;
    cout << "SALARY = U$ " << (B * C) << endl;

    return 0;
}
