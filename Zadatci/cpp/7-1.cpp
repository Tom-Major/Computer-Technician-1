#include <iostream>     
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
using namespace std;
int main ()
{
    int broj = 0;
    int brojBrojeva = 0;
    
    do {
        cout<<"Ucitaj broj: ";
        cin>>broj;
        brojBrojeva++;
    } while( broj > -1 );
    
    brojBrojeva--;
    
    cout<<"Korisnik je ucitao "<<brojBrojeva<<" brojeva prije jednog negativnog";
}