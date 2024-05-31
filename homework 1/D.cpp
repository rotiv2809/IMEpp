#include<iostream>
#include<vector>
#include<map>
using namespace std;


int main(){
    int *vetor, *vetor2, aux;
    long int n, t;
    typedef pair<int,int> par_ordenado;
    cin>>n;
    string *vetor_de_strings = new string[n];
    vetor = (int*)malloc(2*n*sizeof(int));
    for (int i = 0; i < 2*n; i+=2)
    {
        cin>>vetor[i];
        cin>>vetor[i+1];
        cin>>vetor_de_strings[i/2];
    }
    map<par_ordenado, string> mapa;
    for (int i = 0; i < 2*n; i+=2)
    {
        mapa[par_ordenado(vetor[i],vetor[i+1])] = vetor_de_strings[i/2];
    }
    cin>>t;
    vetor2 = (int*)malloc(2*t*sizeof(int));
    for (int i = 0; i < 2*t; i+=2)
    {
        cin>>vetor2[i];
        cin>>vetor2[i+1];
    }
    for (int i = 0; i < 2*t; i+=2)
    {
        cout<<mapa[par_ordenado(vetor2[i],vetor2[i+1])]<<'\n';
    }
    return 0;
}