#include <iostream>
#include"orario.h"
 #include"telefonata.h"
using std::cout;
using std::endl;
 
int main()
{
    orario inizio(12,0,0),fine(14,0,0);
    telefonata nuovo(inizio,fine,367486289);
    cout << inizio << endl;
    cout << fine <<endl;
    cout << nuovo;
}
