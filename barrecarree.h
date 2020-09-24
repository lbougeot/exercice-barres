/**
  @file barrecarree.h
  @brief Déclaration de la classe BarreCarree
  @author Louis BOUGEOT
  @date 24/09/2020
  */


#ifndef BARRECARREE_H
#define BARRECARREE_H
#include <barre.h>


class BarreCarree : public Barre
{
public:
    BarreCarree(const string _reference, const float _densite, const float _longueur, const string _nom);
    ~BarreCarree();
    int CalculerSection();
    int CalculerMasse();

private:
   // int cote;

 //   int section;
};

#endif // BARRECARREE_H
