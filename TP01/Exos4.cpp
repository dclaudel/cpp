#include <iostream>
#include <string.h>
using namespace std;

string* Saisir_Phrase(string* tableau);
void Afficher_Phrases(string* tableau);
void Permut_Phrases(string* tableau);
char** Saisir_Mots(char** tableau);
void Afficher_Mots(char** tableau);
void Supprimer_Mots_Ordre_lexicographique(char** tableau);

int main()
{
    string *Tableau_Chaine=0;
    char **Tableau_Mots=0;

    Tableau_Chaine=Saisir_Phrase(Tableau_Chaine);
    Afficher_Phrases(Tableau_Chaine);
    Permut_Phrases(Tableau_Chaine);
    Afficher_Phrases(Tableau_Chaine);

    Tableau_Mots=Saisir_Mots(Tableau_Mots);
    Afficher_Mots(Tableau_Mots);

    Supprimer_Mots_Ordre_lexicographique(Tableau_Mots);

    cout << "\x1B[2J\x1B[H";

    delete(Tableau_Mots);
    delete(Tableau_Chaine);
}

string* Saisir_Phrase(string* tableau)
{
    tableau = new string[10];

    for(int i=0; i<10;i++)
    {
        cout << "saisir la phrase numero  " << i+1 << " :";
        getline(cin,tableau[i]);
    }

    return tableau;
}

void Afficher_Phrases(string* tableau)
{
    for(int i=0; i<10;i++)
    {
        cout << tableau[i] << endl;
    }    
}

void Permut_Phrases(string* tableau)
{
    string temp;

    temp = tableau[0];

    tableau[0]=tableau[1];
    tableau[1]=temp;

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
        if(tableau[i]!=NULL)
        {
            cout << tableau[i] << endl;
        }
    }    
}

void Supprimer_Mots_Ordre_lexicographique(char** tableau)
{
    char *Mot;
    char rep;
    int motsupp=0;
    int indice=0;
    int j=0;

    Mot=tableau[0];

    while(motsupp<10)
    {
        for(int i=0;i<10;i++)
        {
            if(tableau[i]!=NULL)
            {
                if(strcmp(Mot,tableau[i])>0)
                {
                    Mot=tableau[i];
                    indice=i;
                }
            }
        }

        cout << "Voulez-vous supprimer le mot " << Mot << " ? (o/n)";
        cin >> rep;
        if(rep=='o')
        {
            tableau[indice]=NULL;
            motsupp++;
            while(j<10)
            {
                if(tableau[j]!=NULL)
                {
                    Mot=tableau[j];
                    j=10;
                }
                j++;
            }
            j=0;
        }
        cout << "Mot restant : " << endl;
        cout << "\x1B[2J\x1B[H";
        Afficher_Mots(tableau);
    }
}