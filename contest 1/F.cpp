#include<iostream>
#include<vector>
#include<map>
#include<string.h>

using namespace std;

int primeiro_zero(string numero){
    for (int i = 0; i < numero.size(); i++)
    {
        if(numero[i] == '0'){
            return i;
        }
    }
    return -1;
}
int numero_de_casas(int i){
    int k=0;
    while (i>0)
    {
        i = i/10;
        k++;
    }
    return k;
}


int main(){
    long int n, numero_int;
    cin >> numero_int;
    n = numero_de_casas(numero_int);
    vector <int> vetor(n);
    for (int i = 0; i < n; i++)
    {
        
    }
    
}