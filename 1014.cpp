#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    int X;
    double Y;
    
    cin >> X;
    cin >> Y;

    cout <<setprecision(3)<<fixed;
    cout << X / Y << " km/l" << endl;
    
    return 0;
}
