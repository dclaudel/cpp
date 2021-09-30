#include <iostream>

void Saisir_Taille_Matrice(int* n,int* m);
int** Saisir_Matrice(int** matrice,int* n, int* m);
void Affichage_Matrice(int** matrice,int* n, int* m);
void Affichage_Transposee_Matrice(int** matrice,int* n, int* m);
void Affichage_Matrice_Tableau_unidimensionnel(int** matrice,int* n, int* m);

int main()
{
    int n;
    int m;

    Saisir_Taille_Matrice(&n,&m);

    int **matrice;

    matrice=Saisir_Matrice(matrice,&n,&m);
    Affichage_Matrice(matrice,&n,&m);
    Affichage_Transposee_Matrice(matrice,&n,&m);
    Affichage_Matrice_Tableau_unidimensionnel(matrice,&n,&m);

    
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
    for(int i = 0; i <10; i++)
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

void Affichage_Transposee_Matrice(int** matrice,int* n, int* m)
{
    std::cout << std::endl << "Transposee de la matrice :" << std::endl;

    for(int i=0; i<(*m);i++)
    {
        for(int j=0; j<(*n);j++)
        {
            std::cout << matrice[j][i] << "\t";
        }
        std::cout << std::endl; 
    }
    std::cout << std::endl;
}

void Affichage_Matrice_Tableau_unidimensionnel(int** matrice,int* n, int* m)
{
    std::cout << std::endl << "Matrice interpretee comme un tableau unidimensionnel :" << std::endl;

    for(int i=0; i<(*m);i++)
    {
        for(int j=0; j<(*n);j++)
        {
            std::cout << matrice[j][i] << "\t";
        }
    }
    std::cout << std::endl;
}
