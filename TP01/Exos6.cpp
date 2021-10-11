#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

char** Saisir_Mots(char** tableau);
char** Supprimer_Occurrence(char** tableau);

int main()
{
    char **Tableau_Mots=0;

    Tableau_Mots=Saisir_Mots(Tableau_Mots);
    Tableau_Mots=Supprimer_Occurrence(Tableau_Mots);

    return 0;
}

char** Saisir_Mots(char** tableau)
{
    tableau = new char*[2];
    for(int i = 0; i <2; i++)
    {
        tableau[i] = new char[11];
    }

    for(int i=0; i<2;i++)
    {
        cout << "saisir la mot numero  " << i+1 << " :";
        cin >> tableau[i];
    }

    return tableau;
}

char** Supprimer_Occurrence(char** tableau)
{
    int taille = sizeof(tableau[0]);

    for(int i=0;i<taille;i++)
    {

    }

    return tableau;
}