#include <iostream>     
using namespace std;
int main ()
{
    char c;
    int n;
    
    do {
        cout<<"Upisi slovo: ";
        cin>>c;
        n = c;
        n+=3;
        c = n;
        cout<<"Slovo tri pozicije dalje je: "<<c<<"\n";
    } while (!(n<=97 || n>=122));
    cout<<"'"<<c<<"'"<<" nije slovo! KRAJ!";
}