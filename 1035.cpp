#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
    int A,B,C,D;
    
    cin >> A >> B >> C >> D;
    int soma2 = A + B;
    int soma1 = C + D;
    
    
    if(A % 2 != 0){
        cout << "Valores nao aceitos" << endl;
        return 0;
    }
    
    if(B > C && D > A && soma1 > soma2){
        cout << "Valores aceitos" << endl;
    }else{
       cout << "Valores nao aceitos" << endl;
    }
    return 0;
}