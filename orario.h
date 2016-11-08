#ifndef ORARIO_H
#define ORARIO_H
#include <iostream>
class orario{
    public:
        int Ore() const;
        int Minuti() const;
        int Secondi() const;
        orario(int =0,int =0,int =0);
        orario UnOraPiuTardi() const;
        void AvanzaUnOra();
        orario operator+(orario) const;
        orario operator-(orario) const;
        bool operator==(orario) const;
        bool operator>(orario) const;
        bool operator<(orario) const;
    private:
        int sec;
        static const int Sec_di_un_Ora=3600;
};
std::ostream& operator<<(std::ostream& , const orario& );
 
#endif // ORARIO_H