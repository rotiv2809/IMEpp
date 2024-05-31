#include<iostream>
#include<string>
#include<cmath> // Incluir a biblioteca correta para a função pow()
using namespace std;

int numeroDeDigitos(int n){
    int k = 0;
    while (n>=1)
    {
        n = n/10;
        k++;
    }
    return k;
}

int main(){
    string number;
    int n, soma = 0;
    cin >> number;
    for (int i = 0; i < number.size(); i++)
    {
        soma += int(number[number.size()-i-1]) - 48;
    }
    if(soma % 9 == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}