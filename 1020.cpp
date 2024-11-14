#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
    
    int dias, ano = 0,mes = 0;
    
    cin >> dias;
    
    while(dias >= 365){
        dias = dias - 365;
        ano++;
    }
    while(dias >= 30){
        dias = dias - 30;
        mes++;
    }
    
    std::cout<<ano<<" ano(s)"<<endl;
    std::cout<<mes<<" mes(es)"<<endl;
    std::cout<<dias<<" dia(s)"<<endl;

    return 0;
}