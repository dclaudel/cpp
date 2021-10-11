#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define TAILLE 100
#define RANG 65534

void SOMME_TAB(unsigned int* tableau,unsigned long* somme);

int main()
{
    unsigned int tableau[TAILLE];
    unsigned long somme=0;

    unsigned int n;
    
    cout << "Eléments du tableau : ";   
    
    for (int i = 0; i < TAILLE; i++) 
    {
        n = rand() % RANG + 1;
        tableau[i] = n;
        cout << endl << "Element " << i+1 << " : "<< tableau[i];
    }

    SOMME_TAB(tableau,&somme);

    cout << "La somme des éléments du tableau est de : " << somme << endl;

    return 0;
}

void SOMME_TAB(unsigned int* tableau,unsigned long* somme)
{
    cout << endl << "taille du tableau :" << TAILLE << endl;

    for(int i=0;i<TAILLE;i++)
    {
        *(somme)+=tableau[i];
    }
}