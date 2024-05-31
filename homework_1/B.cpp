#include<iostream>
#include<vector>
using namespace std;

// Corrigindo o tipo de retorno e o algoritmo bubblesort
void bubblesort(vector<long int> &vetor) {
    long int aux;
    for (int i = 0; i < vetor.size(); i++) {
        for (int j = 0; j < vetor.size() - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

// Função para imprimir o vetor
void print_vector(vector<long int> vetor) {
    for (int i = 0; i < vetor.size(); i++) {
        cout << vetor[i] << ' ';
    }
    cout << endl;
}

int main() {
    int n, aux;
    cin >> n;
    vector<long int> vetor(n); // Ajustando o tamanho do vetor
    for (int i = 0; i < n; i++) {
        cin >> aux;
        vetor[i] = aux;
    }
    bubblesort(vetor);
    // Exclusão dos elementos do vetor
    while (vetor.size() > 1) {
        if (vetor.size() != 1) {
            vetor.pop_back();
        }
        if (vetor.size() != 1) {
            vetor.erase(vetor.begin());
        }
    }

    print_vector(vetor);
    return 0;
}