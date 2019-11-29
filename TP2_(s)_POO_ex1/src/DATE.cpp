#include "DATE.h"
#include <DATE.h>
#include <iostream>
DATE::DATE(int j,int m,int a)
{
this->jj=j;
this->mm=m;
this->aaaa=a;
}

/*DATE(DATE);

        void bissextile();
        int nombreDeJour();
        void estValide();
        void afficher();

 DATE::DATE(DATE d)
 {
   this->jj=d.jj;
   this->mm=d.mm;
   this->aaaa=d.aaaa;
 }*/

 void DATE::bissextile()
 {
     if((this->aaaa%4==0 && this->aaaa%100!=0)||(this->aaaa%400==0))
     {
         std::cout<<"\nl'annee "<<this->aaaa<<" est  bessxtile !\n";
     }
     else
     {
         std::cout<<"\nl'annee "<<this->aaaa<<"  non  bessxtile !\n";
     }
 }
  int DATE::bissextileTest()
 {
     if((this->aaaa%4==0 && this->aaaa%100!=0)||(this->aaaa%400==0))
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }
int DATE::leMois()
{


   return this->mm;
}
 int DATE::nombreDeJour()
 {
     if(this->mm==2 && this->bissextileTest()!=1)
     {
         return 28;
     }
     if(this->mm==2 && this->bissextileTest()==1)
     {
         return 29;
     }
     if((this->mm%2==0 && this->mm<7)||(this->mm%2!=0 && this->mm>7) )
     {
         return 30;

     }
     else {
          return 31;
        }


 }

 void DATE::estValide()
 {
     int i=0;
    if(((this->jj<=31)||(this->jj>=1)) &&  ((this->mm<=12) ||(this->jj>=1)) &&  (this->aaaa>0) )
      {

          i=1;
      }
   if(this->mm==2 && i==1)
    {
     if(this->bissextileTest()==1 && this->jj <=29)
     {
         i++;
     }
     if(this->bissextileTest()!=1 && this->jj <=28)
     {
         i++;
     }
     else
     {
         i=0;
     }

    }


switch (i){
case 0 :
    std::cout<<"\n la date donner n'est pas valide !\n";
    break;
case 1 :
     std::cout<<"\n la date donner est valide !\n";
     break;
case 2 :
    std::cout<<"\n la date donner est valide !\n";
    break;

}



 }
void DATE::afficher()
{
    std::cout<<"\n "<<this->jj<<"/"<<this->mm<<"/"<<this->aaaa<<"\n";

}
