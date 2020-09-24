/**
  @file barre.cpp
  @brief implémentation de la classe Barre
  @author Louis BOUGEOT
  @date 24/09/2020
  */


#include "barre.h"
#include <string>
#include <iostream>



using namespace std;

Barre::Barre(const string _reference, const float _densite, const float _longueur, const string _nom):

    reference(_reference),
    densite(_densite),
    longueur(_longueur),
    nom(_nom)
{
    cout << "Constructeur de la classe Barre" << endl;
}

float Barre::AfficherCaracteristique()
{
    cout << "La reference est : " << reference << endl;
    cout << "La densite est : " << densite << endl;
    cout << "La longueur est : " << longueur << endl;
    cout << "Le nom est : " << nom << endl;
}

Barre::~Barre()
{
    cout << "Destructeur de la classe Barre" << endl;
}






