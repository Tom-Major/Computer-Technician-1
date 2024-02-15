#include <iostream>
using namespace std;
int main()
{
    char slovo;
    int brojSlovaA = 0;
    for (int i = 0; i < 10; i++) {
        cout<<"Ucitaj slovo: ";
        cin>>slovo;
        if ( (slovo == 'a') || (slovo == 'A') ) {
            brojSlovaA++;
        }
    }
    cout<<"Od 10 ucitanih slova, njih: "<<brojSlovaA<<" je slovo A";
}