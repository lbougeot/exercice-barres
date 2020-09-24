/**
  @file barrecarree.cpp
  @brief implémentation de la classe BarreCarree
  @author Louis BOUGEOT
  @date 24/09/2020
  */


#include "barrecarree.h"



BarreCarree::BarreCarree(const string _reference, const float _densite, const float _longueur, const string _nom):
    Barre(_reference,_densite,_longueur,_nom)
{
    cout << "Constructeur de la classe BarreCarree" << endl;
}

BarreCarree::~BarreCarree()
{
    cout << "Destructeur de la classe BarreCarree" << endl;
}

int BarreCarree::CalculerSection()
{
    return longueur * longueur;
}


int BarreCarree::CalculerMasse()
{
   return longueur * CalculerSection()  * densite;
}

