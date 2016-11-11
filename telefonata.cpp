
#include "telefonata.h"

telefonata::telefonata(const orario& i,const orario& f, int n) : inizio(i), fine(f), numero(n) {}


telefonata::telefonata() : numero(0) {}


orario telefonata::Inizio() const{
	return inizio;

}

orario telefonata::Fine() const{
	return fine;
}

int telefonata::Numero() const{
	return numero;
}

bool telefonata::operator== (const telefonata& t) const{
	if(inizio==t.inizio && fine==t.fine && numero==t.numero) return true;
	return false;


}

ostream& operator<< (ostream& os, const telefonata& t){
    return os << "INIZIO " <<t.Inizio() << "FINE " << t.Fine() << "NUMERO CHIAMATO " << t.Numero() << std::endl;

}



