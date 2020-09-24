/**
  @file barrerectangle.cpp
  @brief implémentation de la classe BarreRectangle
  @author Louis BOUGEOT
  @date 24/09/2020
  */


#include "barrerectangle.h"



BarreRectangle::BarreRectangle(const string _reference, const float _densite, const float _longueur, const string _nom , const int _largeur):
Barre(_reference,_densite,_longueur,_nom),
largeur(_largeur)
{
    cout << "Constructeur de la classe BarreRectangle" << endl;
}

BarreRectangle::~BarreRectangle()
{
    cout << "Destructeur de la classe BarreRectangle" << endl;
}

int BarreRectangle::CalculerSection()
{
    return  longueur * largeur;

}

int BarreRectangle::CalculerMasse()
{
    return longueur * CalculerSection() * densite;

}
