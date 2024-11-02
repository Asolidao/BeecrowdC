#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    string A;
    double B, C;
    
    cout<<setprecision(2)<<fixed;
    cin >> A >> B >> C;

    cout << "TOTAL = R$ " << (B +(C * 0.15)) << endl;


    return 0;
}
