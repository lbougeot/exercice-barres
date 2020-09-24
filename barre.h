/**
  @file barre.h
  @brief Déclaration de la classe Barre
  @author Louis BOUGEOT
  @date 24/09/2020
  */



#include <string>
#include <iostream>

#ifndef BARRE_H
#define BARRE_H

using namespace std;

class Barre
{
public:
    Barre(const string _reference, const float _densite, const float _longueur, const string _nom);
    float AfficherCaracteristique();
    ~Barre();
    float densite;
    float longueur;

private:
    string reference;
    string nom;
};

#endif // BARRE_H
