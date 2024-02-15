#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    for (int i = 1; i < 11; i++) {
        cout<<"Ucitajte "<<i<<"i broj: ";
        cin>>b;
        a+=b;
    }
    cout<<"Zbroj 10 ucitanih brojeva je: "<<a;
}