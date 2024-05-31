#include<iostream>
#include<vector>
using namespace std;

int bubblesort(vector <int> &vetor){
    int aux;
    for (int i = 0; i < vetor.size(); i++)
        for (int j = 0; j < vetor.size() - i - 1; j++)
        {
            if (vetor[j]>vetor[j+1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
}


int main(){
    int n, aux, k=0;
    vector <int> vetor;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>aux;
        vetor.push_back(aux);
    }
    bubblesort(vetor);
    for (int i = 0; i < vetor.size(); i++)
    {
        if (vetor[i] != vetor[0])
        {
            printf("%d",vetor[i]);
            k++;
            break;
        }
    }
    if(!k){
        cout<<"NO";
    }
}

// wrong at test 3