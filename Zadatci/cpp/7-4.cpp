#include <iostream>     
using namespace std;
int main ()
{
    int broj = 0;
    int sum = 0;
    int brojBrojeva = 0;
    
    do {
        cout<<"Ucitaj broj: ";
        cin>>broj;
        brojBrojeva++;
        sum+=broj;
    } while(sum<1000);
    
    cout<<"Korisnik je ucitao "<<brojBrojeva<<" brojeva \n";
    cout<<"Sum brojeva je "<<sum;
}