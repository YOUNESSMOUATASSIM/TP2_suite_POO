#include "Polynome_2D.h"
#include <math.h>
#include <iostream>
Polynome_2D::Polynome_2D(double A,double B,double C)
{
    this->A=A;
    this->B=B;
    this->C=C;
}
/*   Polynome_2D(double A=0,double B=0,double C=0);
       Polynome_2D homothetie(double coeff=0);
       Polynome_2D somme(Polynome_2D p);
       void resultion();
       void afficher();
*/
Polynome_2D Polynome_2D::homothetie(double coeff)
{
    this->A*=coeff;
    this->B*=coeff;
    this->C*=coeff;

return *this;
}
Polynome_2D Polynome_2D::somme(Polynome_2D p)
{
   Polynome_2D s;
   s.A=this->A+p.A;
   s.B=this->B+p.B;
   s.C=this->C+p.C;

   return s;


}
void Polynome_2D::resultion()
{
double delta=0;
double x=0;

 delta=pow(this->B,2)-4*(this->A)*(this->C);

 if(delta==0)
 {
x=(-1*(this->B))/(2*(this->A));

std::cout<<"\nle polynome a une seule solution  :\t";
std::cout<<"x="<<x<<"\n";
 }
if(delta>0)
{
  x=(1*(this->B)+ sqrt(delta)) /(2*(this->A)) ;
  std::cout<<"\nle polynome a deux  solutions  :\t";
std::cout<<"x1="<<x<<"\t";
  x=(1*(this->B)- sqrt(delta)) /(2*(this->A)) ;
  std::cout<<"x2="<<x<<"\n";
}
if(delta<0)
{
   std::cout<<"\n le polynome "<<this->A<<"x^2 + "<<this->B<<"x + "<<this->C<< "= 0 n' admet pas de solution dans R \n";

}

}
void Polynome_2D::afficher()
{
    std::cout<<"\n  "<<this->A<<"x^2 + "<<this->B<<"x + "<<this->C<< "\n";

}
