#include<iostream>
#include<string>
#include<vector>
#include<cmath> // Incluir a biblioteca correta para a função pow()
using namespace std;

void printMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  

    int test_cases, n, s, r;
    int **matriz;
    cin>>test_cases;

    while (test_cases--) {
        cin>>n>>s>>r;

    }

    //definindo a matriz
    matriz = (int**)malloc(test_cases*sizeof(int*));
    for (int i = 0; i < 10; i++)
    {
        matriz[i] = (int*)malloc(3*sizeof(int));
    }

    //colocando os dados na matriz
    for (int i = 0; i < test_cases; i++)
        for (int j = 0; j < 3; j++)
        {
            cin>>matriz[i][j];
        }
        
    







    for (int i = 0; i < 10; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    
}