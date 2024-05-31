#include<iostream>
#include<vector>
#include<map>

using namespace std;

int finder(vector <long int> vector, long int x){
    for (int i = 0; i < vector.size(); i++)
    {
        if (vector[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    long int n, x, k = 0;
    cin>>n>>x;
    vector <long int> vector_i;
    vector <long int> aux;
    map <long int,long int> mapa;
    vector <long int> vector(n);
    for (long int i = 0; i < n; i++)
    {
        cin >> vector[i];
    }
   for (long int i = 0; i < n; i++)
   {
        if (finder(vector, x - vector[i]) != -1){
            mapa[i] = finder(vector, x - vector[i]);
            vector_i.push_back(i);
        }
   }
   for (long int i = 0; i < vector_i.size(); i++)
   {
        
            cout << vector_i[i] + 1 << ' ' << mapa[vector_i[i]] + 1<< '\n';
            return 0;
            k++;
    }
    if (!k)
    {
        cout<<-1;
    }
   }