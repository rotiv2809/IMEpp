#include<bits/stdc++.h>

using namespace std;

bool check(int c){
    double aux;
    aux = (double)sqrt(1+4*(c*c - c));
    if (aux == round(aux) && aux != 0)
    {
        aux = (aux - 1)/2;
        if(aux == round(aux) && aux != 0){ //b existe
            aux = sqrt(aux + c);
            if(aux == round(aux) && aux != 0){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    vector <int> vector;
    double x = pow(10,9);
    for (int i = 0; i < x; i++)
    {
        if(check(i)) vector.push_back(i);
    }
}

