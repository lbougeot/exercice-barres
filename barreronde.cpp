/**
  @file barreronde.cpp
  @brief implémentation de la classe BarreRonde
  @author Louis BOUGEOT
  @date 24/09/2020
  */


#include "barreronde.h"


BarreRonde::BarreRonde(const string _reference, const float _densite,
                       const float _longueur, const string _nom, const int _diametre):
    Barre(_reference,_densite,_longueur,_nom),
  diametre(_diametre)
{
    cout << "Constructeur de la classe BarreRonde" << endl;
}

BarreRonde::~BarreRonde()
{
    cout << "Destructeur de la classe BarreRonde" << endl;
}

int BarreRonde::CalculerSection()
{
    return  3.14 * (diametre*diametre) / 4;

}

int BarreRonde::CalculerMasse()
{
    return longueur * CalculerSection() * densite;
}
