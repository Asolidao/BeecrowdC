#include<iostream>
#include<iomanip>
#include<string>
#include <cmath>

using namespace std;

int main()
{
    double X1,X2,Y1,Y2;
    
    cin >> X1 >> Y1;
    cin >> X2 >> Y2;
    
    
    cout <<setprecision(4)<<fixed;
    cout << sqrt(pow(X2 - X1,2) + pow(Y1 - Y2,2)) << endl;
    
    return 0;
}
