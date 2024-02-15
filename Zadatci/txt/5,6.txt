#include <iostream>
using namespace std;
int main()
{
    int broj = 0;
    
    cout<<"Ucitaj broj: ";
    cin>>broj;
    
    for(int i = broj; i > 1; i--) {
        broj--;   
        cout<<broj<<"\n";
    }
}