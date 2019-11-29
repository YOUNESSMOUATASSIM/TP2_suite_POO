#include <iostream>
#include "Polynome_2D.h"
using namespace std;

int main()
{
    Polynome_2D p(1,5,9);
    Polynome_2D p1(1,-4,3);
    Polynome_2D som;

    p.afficher();
    p1.afficher();

    som=p.somme(p1);

    p.homothetie(2);

    p.resultion();
    p1.resultion();



    som.afficher();
    p.afficher();
    p1.afficher();
    return 0;
}
