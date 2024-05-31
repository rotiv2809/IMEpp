#include<iostream>
#include<vector>
#include<map>

using namespace std;


int main(){
    int n;
    cin>>n;
    vector <int> aux_vector(n);
    vector <int> vector(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vector[i];
    }
    for (int i = 0; i < n; i++)
    {
        aux_vector[vector[i] -1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<aux_vector[i]<<' ';
    }
}