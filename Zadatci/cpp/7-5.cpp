#include <iostream>     
using namespace std;
int main ()
{
    char a;
    char b;
    int brojBrojeva = 0;
    
    do {
        b=a;
        cout<<"Ucitaj slovo: ";
        cin>>a;
        brojBrojeva++;
    } while(a!=b);
    
    cout<<"Korisnik je ucitao "<<brojBrojeva<<" slova";
}