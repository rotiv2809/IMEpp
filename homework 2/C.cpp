#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a,b;
    float aux;
    cin >> n;
    vector <pair<int,int>> vector_aux;
    vector <pair<int,int>> vector;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        vector.push_back({a,b});
    }
    sort(vector.begin(), vector.end());
    for (int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            {
                if(i != j){
                    aux = (float)(vector[i].first + vector[j].first)/2;
                    if(round(aux) == aux){
                        aux = (float)(vector[i].second + vector[j].second)/2;
                        if(round(aux) == aux){
                            vector_aux.push_back(make_pair(i,j));
                        }
                }
                }   
            }
    //hora de identificar quais dessas tem ponto médio
    for (int i = 0; i < vector_aux.size(); i++)
    {
        pair <int, int> p = {(vector[vector_aux[i].first].first +  vector[vector_aux[i].second].first)/2,(vector[vector_aux[i].first].second +  vector[vector_aux[i].second].second)/2};
        if(!binary_search(vector.begin(), vector.end(), p)){
            vector_aux.erase(vector.begin() + i);
        }
    }
    cout << vector_aux.size()/2;
}