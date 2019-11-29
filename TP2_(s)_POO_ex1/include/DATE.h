#ifndef DATE_H
#define DATE_H


class DATE
{
    private:
        int jj;
        int mm;
        int aaaa;



    public:
        DATE(int j=0,int m=0,int a=0);
        //DATE(DATE);

        void bissextile();
        int bissextileTest();
        int leMois();
        int nombreDeJour();
        void estValide();
        void afficher();




};

#endif // DATE_H
