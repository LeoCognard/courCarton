#ifndef CAISSEDEBOUTEILLES_H
#define CAISSEDEBOUTEILLES_H
#include "contenant.h"

class CaisseDeBouteille : public Contenant{
public:
    CaisseDeBouteille(const int _largeur, const int _hauteur,const int _profondeur,const int _contenance);
    int CalculerVolume();
    ~CaisseDeBouteille();
private:
    int nbBouteilles;
    int contenance;
};


#endif // CAISSEDEBOUTEILLES_H
