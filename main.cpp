#include <iostream>
#include <string>
#include "barre.h"
#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarree.h"

using namespace std;

int main()
{
    Barre laBarre("BarreAx1040",5.7,8.9,"Aluminium");
    cout << laBarre.AfficherCaracteristique() << endl;


    BarreRonde laBarreRonde("BarreAx1040",5.7,8.9,"Aluminium",10);
    cout << "La section de la Barre ronde est : " << laBarreRonde.CalculerSection() << endl;
    cout << "La masse de la Barre ronde est : " << laBarreRonde.CalculerMasse() << endl;

    BarreRectangle laBarreRectangle("BarreAx1040",5.7,8.9,"Aluminium",6);
    cout << "La section de la Barre rectangle est : " << laBarreRectangle.CalculerSection() << endl;
    cout << "La masse de la Barre rectangle est : " << laBarreRectangle.CalculerMasse() << endl;

    BarreCarree laBarreCarree("BarreAx1040",5,5,"Aluminium");
    cout << "La section de la Barre carree est : " << laBarreCarree.CalculerSection() << endl;
    cout << "La masse de la Barre carree est : " << laBarreCarree.CalculerMasse() << endl;


    return 0;
}
