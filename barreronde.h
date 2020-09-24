/**
  @file barreRonde.h
  @brief Déclaration de la classe BarreRonde
  @author Louis BOUGEOT
  @date 24/09/2020
  */




#ifndef BARRERONDE_H
#define BARRERONDE_H
#include <barre.h>

class BarreRonde : public Barre
{
public:
    BarreRonde(const string _reference, const float _densite, const float _longueur, const string _nom,const int _diametre);
    ~BarreRonde();
    int CalculerSection();
    int CalculerMasse();

private:
    int diametre;

};


#endif // BARRERONDE_H
