#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    long int n, q;
    cin>>n>>q;
    vector <long int> targ(q);
    vector <long int> vector(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vector[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin>>targ[i];
    }
    cout << "respostas\n";
    for (int i = 0; i < q; i++)
    {
        cout << binary_search(vector.begin(),vector.end(), targ[i])<<'\n';
    }   
}