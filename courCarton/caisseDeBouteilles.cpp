#include "caisseDeBouteilles.h"
#include <iostream>

using namespace std;

CaisseDeBouteille::CaisseDeBouteille(const int _largeur, const int _hauteur, const int _profondeur,const int _contenance):
    Contenant(_largeur,_hauteur,_profondeur),
    contenance(_contenance)
{
    cout<<"Constructeur caise bouteille"<<endl;
}

int CaisseDeBouteille::CalculerVolume()
{

}

CaisseDeBouteille::~CaisseDeBouteille()
{
    cout << "destructeur clase bouteille"<<endl;
}
