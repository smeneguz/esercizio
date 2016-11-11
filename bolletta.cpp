#include "bolletta.h"

bolletta::bolletta() : first(0) {}

bolletta::nodo::nodo() : next(0) {} //costruttore di default per il campo info

bolletta::nodo::nodo(const telefonata& t, nodo*s) : info(t), next(s) {}

bool bolletta::vuota() const { return first==0; }

void bolletta::aggiungi_telefonata(const telefonata & t){
    first = new nodo(t, first);   //aggiunge in testa alla lista
}

void bolletta::togli_telefonata(const telefonata & t){
    nodo*p = first, *prec=0;
    while(p && !(p->info==t)){
        prec = p;
        p = p->next;
    }
    if(p){
        if(!prec)
            first = p->next;
        else
            prec->next = p->next;
        delete p;
    }
}

telefonata bolletta::estrai_una(){
    nodo*p = first;
    first = first->next;
    telefonata aux = p->info;
    delete p;
    return aux;
}

ostream& operator<< (ostream& os, const bolletta& b){
     os << "TELEFONATA IN BOLLETTA" << std::endl;
     bolletta::nodo*p = b.first;  //per amicizia
     int i =1;
     while(p){
         os <<  i++ << ") " <<p->info << std::endl;
         p = p->next;
     }
     return os;
}

bolletta::nodo* bolletta::copia(nodo*p){
    if(!p) return 0;
    return new nodo(p->info, copia(p->next));
}

void bolletta::distruggi(nodo*p){
    if(p){
        distruggi(p->next);
        delete p;
    }
}

bolletta& bolletta::operator= (const bolletta& b){
    if(this != &b){
        distruggi (first);
        first = copia(b.first);
    }
    return *this;

}
