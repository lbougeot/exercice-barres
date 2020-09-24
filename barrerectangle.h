/**
  @file barrerectangle.h
  @brief Déclaration de la classe BarreRectangle
  @author Louis BOUGEOT
  @date 24/09/2020
  */



#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include <barre.h>


class BarreRectangle : public Barre
{
public:
    BarreRectangle(const string _reference, const float _densite, const float _longueur, const string _nom,const int _largeur);
    ~BarreRectangle();
    int CalculerSection();
    int CalculerMasse();

private:

    int largeur;
};

#endif // BARRERECTANGLE_H
