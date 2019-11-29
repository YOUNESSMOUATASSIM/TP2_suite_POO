#ifndef POLYNOME_2D_H
#define POLYNOME_2D_H


class Polynome_2D
{   private:
    double A;
    double B;
    double C;


    public:
        Polynome_2D(double A=0,double B=0,double C=0);
       Polynome_2D homothetie(double coeff=0);
       Polynome_2D somme(Polynome_2D p);
       void resultion();
       void afficher();



};

#endif // POLYNOME_2D_H
