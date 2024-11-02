#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    int R;
    cin >> R;
    cout << setprecision(3)<<fixed;
    cout << "VOLUME = " << (4.0/3 * 3.14159) * R * R * R << endl;
    
    return 0;
}
