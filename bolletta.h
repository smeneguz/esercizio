#ifndef BOLLETTA_H
#define BOLLETTA_H

#include "telefonata.h"

class bolletta{
    friend ostream& operator<<(ostream&, const bolletta&);

    public:
         bolletta();
         bool vuota() const;
         void aggiungi_telefonata(const telefonata&);
         void togli_telefonata(const telefonata&);
         telefonata estrai_una();
         bolletta& operator= (const bolletta&); //ridefinizione profonda di assegnazione pper evitare problemi di interferenza
     private:
         class nodo{   //la classe nodo è interna e privata
         public:
             nodo();
             nodo(const telefonata&, nodo*);
             telefonata info;
             nodo* next;
         };
         nodo*first;  //puntatore al primo nodo della lista
         static nodo* copia(nodo*);
         static void distruggi (nodo*);

 };

ostream& operator<<(ostream&, const bolletta&);


#endif // BOLLETTA_H
