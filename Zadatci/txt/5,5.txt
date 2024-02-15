#include <iostream>
using namespace std;
int main()
{
    int broj = 0;
    char znak;
    
    cout<<"Unesi jedan znak: ";
    cin>>znak;
    
    cout<<"Koliko puta da se znak ponovi? ";
    cin>>broj;
    
    for (int i = 0; i < broj; i++) {
        cout<<znak;   
    }
}