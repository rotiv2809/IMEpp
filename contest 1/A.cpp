#include<iostream>
#include<vector>

using namespace std;

void swap(vector <int> &vectorr, int i){
    int aux;
    int tamanho = vectorr.size();
    aux = vectorr[tamanho - i - 1];
    vectorr[tamanho - i - 1] = vectorr[tamanho - i];
    vectorr[tamanho - i] = aux;
}


int main(){
    int t, m, n;
    cin>> t;
    cin>> n>> m;
    vector <int> vetor_n(n);
    vector <int> vetor_p(m);
    for (int i = 0; i < n; i++)
    {
        cin>>vetor_n[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>vetor_p[i];
    }
    
    
}

