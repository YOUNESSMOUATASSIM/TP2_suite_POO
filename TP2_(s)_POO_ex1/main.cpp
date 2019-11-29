#include <iostream>
#include "DATE.h"
using namespace std;

int main()
{
   DATE d(8,7,2000);
   d.bissextile();
   int nb=d.nombreDeJour();
   std::cout<<"\n le nombre des jours du mois "<<d.leMois()<<" est :"<<nb<<"\n";
   d.afficher();
   d.estValide();

    return 0;
}
