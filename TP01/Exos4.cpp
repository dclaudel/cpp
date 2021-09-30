#include <iostream>
#include <string.h>
using namespace std;

char** Saisir_Phrase(char** tableau);
void Afficher_Phrases(char** tableau);
char** Saisir_Mots(char** tableau);
void Afficher_Mots(char** tableau);
void Supprimer_Mots_Ordre_lexicographique(char** tableau);

int main()
{
    char **Tableau_Chaine;
    char **Tableau_Mots;
    char *Mot_supp;
    char rep;

    /*Tableau_Chaine=Saisir_Phrase(Tableau_Chaine);
    Afficher_Phrases(Tableau_Chaine);*/

    Tableau_Mots=Saisir_Mots(Tableau_Mots);
    Afficher_Mots(Tableau_Mots);

    Supprimer_Mots_Ordre_lexicographique(Tableau_Mots);

    delete(Tableau_Mots);
    delete(Tableau_Chaine);
}

char** Saisir_Phrase(char** tableau)
{
    tableau = new char*[10];
    for(int i = 0; i <10; i++)
    {
        tableau[i] = new char[200];
    }

    for(int i=0; i<10;i++)
    {
        cout << "saisir la phrase numero  " << i+1 << " :";
        cin >> tableau[i];
    }

    return tableau;
}

void Afficher_Phrases(char** tableau)
{
    for(int i=0; i<10;i++)
    {
        cout << tableau[i] << endl;
    }    
}

char** Saisir_Mots(char** tableau)
{
    tableau = new char*[10];
    for(int i = 0; i <10; i++)
    {
        tableau[i] = new char[50];
    }

    for(int i=0; i<10;i++)
    {
        cout << "saisir la mot numero  " << i+1 << " :";
        cin >> tableau[i];
    }

    return tableau;
}

void Afficher_Mots(char** tableau)
{
    for(int i=0; i<10;i++)
    {
        cout << tableau[i] << endl;
    }    
}

void Supprimer_Mots_Ordre_lexicographique(char** tableau)
{
    char *Mot;
    char rep;
    int indice;
    int nbmot=10;

    Mot=tableau[0];
    for(int i=0; i<10; i++)
    {
        for(int i=1; i<nbmot;i++)
        {
            if((strcmp(Mot,tableau[i])>0) && tableau[i]!=NULL)
            {
                Mot=tableau[i];
                indice=i;
            }
        }  
        cout << "Voulez-vous supprimer le mot " << Mot << " ? (o/n)";
        cin >> rep;
        if(rep=='o')
        {
            delete(Mot);
            while(indice<nbmot)
            {
                if(indice+1!=nbmot)
                {
                    tableau[indice]=tableau[indice+1];
                }
                indice++;
            }
            tableau[nbmot]=NULL;
            nbmot--;
        }
    }
}