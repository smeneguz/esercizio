#include<iostream>
#include "orario.h"
 
int orario::Ore() const {return (sec / 3600)%24; }
 
int orario::Minuti () const {return (sec / 60 ) % 60 ;}
 
int orario::Secondi () const {return sec % 60;}
 
orario::orario(int o, int m, int s) {
    if(o < 0 || o > 23 || m < 0 || m > 59 || s < 0 || s > 59) sec = 0;
    else sec = o * Sec_di_un_Ora + m * 60 + s;
}
 
orario orario::UnOraPiuTardi() const    {
    orario aux;
    aux.sec = (sec + Sec_di_un_Ora) % (Sec_di_un_Ora*24);
    return aux;
}
 
void orario::AvanzaUnOra()  {
    sec = (sec + Sec_di_un_Ora) % (Sec_di_un_Ora*24);
}
 
orario orario::operator+(orario O) const {
    orario aux;
    aux.sec = (sec + O.sec) % (Sec_di_un_Ora*24);
    return aux;
}
 
orario orario::operator-(orario O) const {
    orario aux;
    aux.sec = (sec - O.sec) % (Sec_di_un_Ora*24);
    if(sec < O.sec)  aux.sec = aux.sec + (Sec_di_un_Ora*24);
    return aux;
}
 
bool orario::operator==(orario O) const {
    if(sec == O.sec)    return true;
    else    return false;
}
 
bool orario::operator>(orario O) const {
    if(sec > O.sec)  return true;
    else    return false;
}
 
bool orario::operator<(orario O) const {
    if(sec < O.sec)  return true;
    else    return false;
}
std::ostream& operator<<(std::ostream& os, const orario& o) {
    return os << o.Ore() << ':' << o.Minuti() << ':' << o. Secondi();
}
