#include<iostream>
#include<string>
#include<cmath> // Incluir a biblioteca correta para a função pow()
using namespace std;

int main(){
    string numero;
    long int soma = 0;
    cin >> numero;
    for (int i = 0; i < numero.size(); i++) {
        soma += (int(numero[i]) - int('A') + 1) * pow(26, numero.size() - i - 1);
    }
    cout << soma;
    return 0;
}