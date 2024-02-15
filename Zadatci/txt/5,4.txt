#include <iostream>
using namespace std;
int main()
{
    int brojDjeljivihBrojeva = 0;
    int broj = 0;
    for (int i = 0; i < 10; i++) {
        cout<<"Ucitaj broj: ";
        cin>>broj;
        if (broj != 0 && broj % 5 == 0) {
           cout<<"Broj: "<<broj<<" je djeljiv s 5 \n";
           brojDjeljivihBrojeva++;
        }
    }
    cout<<"Ukupan broj brojeva koji su djeljivi s 5 je: "<<brojDjeljivihBrojeva;
}