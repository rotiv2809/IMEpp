#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, count = 0, x, y;
    set <pair<int,int>> list;
    set <pair<int,int>> :: iterator it1;
    set <pair<int,int>> :: iterator it2;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        list.insert(make_pair(a,b));
    }
    
    for(auto it1 : list)
        for(auto it2 : list){
            if(it1 != it2){
                x = it1.first + it2.first;
                y = it1.second + it2.second;
                if(x%2 == 0 && y%2 == 0)
                if(list.find(make_pair(x/2,y/2)) != list.end()){
                    count++;
                }
            }
        }
        
    cout << count/2;
}