#include<iostream>
#include<vector>
#include<map>
// (x1, y1) > (x2, y2) if and only if (x1 > x2) or (x1 == x2 and y1 < y2) 
using namespace std;

void merge(std::vector<int>& vetor, int inicio, int meio, int fim, map <long int, long int> map) {
    int tamanho_esquerda = meio - inicio + 1;
    int tamanho_direita = fim - meio;

    vector<int> esquerda(tamanho_esquerda);
    vector<int> direita(tamanho_direita);

    for (int i = 0; i < tamanho_esquerda; ++i) {
        esquerda[i] = vetor[inicio + i];
    }
    for (int j = 0; j < tamanho_direita; ++j) {
        direita[j] = vetor[meio + 1 + j];
    }

    // Mescla os vetores temporários de volta no vetor original
    int i = 0, j = 0, k = inicio;
    while (i < tamanho_esquerda && j < tamanho_direita) {
        if (esquerda[i] < direita[j]) {
            vetor[k] = esquerda[i];
            ++i;
        }
        else if (esquerda[i]==direita[j])
        {
            if (map[esquerda[i]]>map[esquerda[i]])
            {
                vetor[k] = esquerda[i];
                ++i;
            }
        }
        else {
            vetor[k] = direita[j];
            ++j;
        }
        ++k;
    }

    // Copia os elementos restantes de esquerda[] se houver
    while (i < tamanho_esquerda) {
        vetor[k] = esquerda[i];
        ++i;
        ++k;
    }

    // Copia os elementos restantes de direita[] se houver
    while(j < tamanho_direita) {
        vetor[k] = direita[j];
        ++j;
        ++k;
    }
}

// Função recursiva para dividir o vetor em subvetores e chamar merge() para mesclá-los
void mergeSort(std::vector<int>& vetor, int inicio, int fim, map <long int, long int> map) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        // Divide o vetor em duas metades e chama mergeSort recursivamente
        mergeSort(vetor, inicio, meio, map);
        mergeSort(vetor, meio + 1, fim, map);

        // Mescla as metades ordenadas
        merge(vetor, inicio, meio, fim, map);
    }
}

// Função de conveniência para chamar mergeSort com parâmetros iniciais
void mergeSort(std::vector<int>& vetor, map <long int, long int> map) {
    mergeSort(vetor, 0, vetor.size() - 1, map);
}


int main(){
    int test_cases, n;
    cin>> test_cases >> n;
    vector <long int> x_coordinates(n);
    vector <long int> y_coordinates(n);
    map <long int, long int> map;
    for (int i = 0; i < n; i++)
    {
        cin>>x_coordinates[i]>>y_coordinates[i];
        map[x_coordinates[i]] = y_coordinates[i];
    }
    mergeSort(x_coordinates, x_coordinates.begin(), x_coordinates.end(), map);
}