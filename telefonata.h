#ifndef TELEFONATA_H
#define TELEFONATA_H
//#include <iostream>
#include "orario.h"

using std::ostream;

class telefonata{
public:
    telefonata(const orario&,const orario&,int);
	telefonata ();
    orario Inizio() const;
	orario Fine() const;
	int Numero() const;
	bool operator == (const telefonata&) const;
	
private:
	orario inizio, fine;
	int numero;
};

ostream& operator<<(ostream&, const telefonata&);

#endif
