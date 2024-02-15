#include <iostream>
using namespace std;
int main()
{
    int pomnozeniBrojevi = 1;
    int broj = 0;
    
    for (int i = 0; i < 10; i++) {
        cout<<"Ucitaj broj: ";
        cin>>broj;
        
        if (broj != 0 && broj % 3 == 0) {
            pomnozeniBrojevi = pomnozeniBrojevi * broj;
        }
    }
    if (pomnozeniBrojevi == 1) {
        cout<<"Ukupan umnozak brojeva koji su djeljivi s 3 je: 0";
    }
    else {
    cout<<"Ukupan umnozak brojeva koji su djeljivi s 3 je: "<<pomnozeniBrojevi;
    }
}