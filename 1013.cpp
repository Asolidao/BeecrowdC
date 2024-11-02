#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    int A, B, C, maior;
    
    cin >> A >> B >> C;

    maior = max(A, max (B,C));

    cout << maior << " eh o maior" << endl;
    
    return 0;
}
