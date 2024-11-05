#include<iostream>
#include<iomanip>
#include<string>


using namespace std;

int main(){

    int X,Y;

    cin >> X;
    cin >> Y;
    
    float distancia = X * Y;
    float media = distancia / 12;
    

    cout <<setprecision(3)<<fixed;
    cout << media << endl;
    
    return 0;
}