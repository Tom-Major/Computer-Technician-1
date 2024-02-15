#include <iostream>     
#include <string>
using namespace std;
int main ()
{
    string rijec;
    int brojBrojeva = 0;
    
    do {
        cout<<"Ucitaj rijec: ";
        cin>>rijec;
        brojBrojeva++;
    } while(rijec !=  "KRAJ");
    
    brojBrojeva--;
    
    cout<<"Korisnik je ucitao "<<brojBrojeva<<" rijeci";
}
