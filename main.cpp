#include <iostream>
#include"orario.h"
 #include"telefonata.h"
#include"bolletta.h"

using std::cout;
using std::endl;
 
int main()
{
    orario inizio(12,0,0),fine(14,0,0);
    telefonata nuovo(inizio,fine,367486289);
    cout << inizio << endl;
    cout << fine <<endl;
    cout << nuovo;

    bolletta b1;
    telefonata t1(orario(9,23,12), orario(10, 4, 53), 2121212);
    telefonata t2(orario(11,15,4), orario(11, 22, 1), 3131313);
    b1.aggiungi_telefonata(t1);
    b1.aggiungi_telefonata(t2);
    cout << b1;
    bolletta b2;
    b2 = b1;
    b2.togli_telefonata(t1);

    cout<< b1 << b2;

}
