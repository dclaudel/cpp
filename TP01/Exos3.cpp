#include <iostream>

void Saisir_Taille_Matrice(int* n,int* m);
int** Saisir_Matrice(int** matrice,int* n, int* m);
void Affichage_Matrice(int** matrice,int* n, int* m);
int** Multiplication_Matrice(int** resultat,int** matrice1, int** matrice2,int* n, int* m);

int main()
{
    int n=0;
    int m=0;

    Saisir_Taille_Matrice(&n,&m);

    int **M=0;
    int **P=0;
    int **C=0;

    std::cout << "saisi de la matrice M :" << std::endl;
    M=Saisir_Matrice(M,&n,&m);
    std::cout << "affichage de la matrice M :" << std::endl;
    Affichage_Matrice(M,&n,&m);

    std::cout << "saisi de la matrice P :" << std::endl;
    P=Saisir_Matrice(P,&n,&m);
    std::cout << "affichage de la matrice P :" << std::endl;
    Affichage_Matrice(P,&n,&m);

    std::cout << "affichage de la multiplication de M*P :" << std::endl;
    C=Multiplication_Matrice(C,M,P,&n,&m);
    Affichage_Matrice(C,&n,&m);


    delete(M);
    delete(P);
    delete(C);

    return 0;
}

void Saisir_Taille_Matrice(int* n,int* m)
{
    std::cout << "saisir le nombre de ligne : ";
    std::cin >> *n;

    std::cout << "saisir le nombre de colonne : ";
    std::cin >> *m;
}

int** Saisir_Matrice(int** matrice,int* n, int* m)
{
    matrice = new int*[(*n)];
    for(int i = 0; i <(*n); i++)
    {
        matrice[i] = new int[(*m)];
    }

    for(int i=0; i<(*n);i++)
    {
        for(int j=0; j<(*m);j++)
        {
            std::cout << "saisir le nombre a la ligne " << i << " et a la colonne " << j << " :";
            std::cin >> matrice[i][j];
        }
    }

    return matrice;

}

void Affichage_Matrice(int** matrice,int* n, int* m)
{

    std::cout << std::endl << "Contenu de la matrice :" << std::endl;

    for(int i=0; i<(*n);i++)
    {
        for(int j=0; j<(*m);j++)
        {
            std::cout << matrice[i][j] << "\t";
        }
        std::cout << std::endl; 
    }
    std::cout << std::endl;
}

int** Multiplication_Matrice(int** resultat,int** matrice1, int** matrice2,int* n, int* m)
{
    resultat = new int*[(*n)];
    for(int i = 0; i <(*n); i++)
    {
        resultat[i] = new int[(*m)];
    }

    for(int i = 0; i < (*n); i++)
    {
      for(int j = 0; j < (*m); j++)
      {
          resultat[i][j] = 0;
          for(int k = 0; k < (*m); k++)
          {
              resultat[i][j] += matrice1[i][k] * matrice2[k][j];
          }
      }
    }   

    return resultat;
}