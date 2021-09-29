#include <iostream>

int nbjour (int mois, int annee);

int main()
{
    int mois;
    int annee;
    int resultat;

    std::cout << "saisir le numero de mois : ";
    std::cin >> mois;

    std::cout << "saisir l'annee : ";
    std::cin >> annee;

        resultat = nbjour(mois,annee);

    std::cout << std::endl << "le nombre de jour est de : " << resultat << std::endl;

    return 0;
}

int nbjour (int mois, int annee)
{
    int nbjours;

    if(((mois<=7) && (mois%2!=0)) || ((mois>7) && (mois%2==0)))
    //if (mois==1 || mois==3 || mois==5 || mois==7 || mois==8 || mois==10 || mois==12)
    {
        nbjours=31;
    }
    else if(mois==2)
    {
        if(annee % 4 == 0)
        {
            if( annee % 100 == 0)
            {
                if ( annee % 400 == 0)
                    nbjours=29;
                else
                    nbjours=28;
            }
            else
                nbjours=29;
        }
        else
            nbjours=28;
    }
    else
    {
        nbjours=30;
    }

    return nbjours;

}