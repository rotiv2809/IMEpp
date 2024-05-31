#include<iostream>
#include<vector>
using namespace std;

// Corrigindo o tipo de retorno e o algoritmo bubblesort
void merge(std::vector<long int>& vetor, int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    // Criando vetores temporários
    std::vector<int> L(n1), R(n2);

    // Copiando dados para vetores temporários L[] e R[]
    for (int i = 0; i < n1; i++)
        L[i] = vetor[inicio + i];
    for (int j = 0; j < n2; j++)
        R[j] = vetor[meio + 1 + j];

    // Merge dos vetores temporários de volta para vetor[]
    int i = 0; // Índice inicial do primeiro subvetor
    int j = 0; // Índice inicial do segundo subvetor
    int k = inicio; // Índice inicial do vetor mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vetor[k] = L[i];
            i++;
        } else {
            vetor[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiando os elementos restantes de L[], se houver algum
    while (i < n1) {
        vetor[k] = L[i];
        i++;
        k++;
    }

    // Copiando os elementos restantes de R[], se houver algum
    while (j < n2) {
        vetor[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<long int>& vetor, int inicio, int fim) {
    if (inicio < fim) {
        // Encontrando o ponto médio do vetor
        int meio = inicio + (fim - inicio) / 2;

        // Chamando mergeSort para a metade esquerda
        mergeSort(vetor, inicio, meio);
        // Chamando mergeSort para a metade direita
        mergeSort(vetor, meio + 1, fim);

        // Mesclando as metades ordenadas
        merge(vetor, inicio, meio, fim);
    }
}



int main() {
    long int n, aux, k=0;
    cin >> n;
    vector<long int> vetor(n); // Ajustando o tamanho do vetor
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }
    mergeSort(vetor, 0, vetor.size() - 1);
    for (int i = 0; i < vetor.size(); i++)
    {
        if (vetor[i] != vetor[i+1])
        {
            k++;
        }
    }
    cout<<k;
}

// wrong at test 3