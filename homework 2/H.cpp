#include<iostream>
#include<vector>

using namespace std;



int main(){
    long int n;
    int x, help;
    vector <int> vector;
    cin>>n>>x;
    if(n>=6){
        if(n%2 != 0){
        help = (n-2*x)%6;
    }
    else if (n%2 == 0)
    {
        if (x == 1)
        {
            help = (n + x) % 6;
        }
        else help = (n-(x+1))%6;
    }
    vector = {1,0,0};
    }
    else {
        help = n;
        vector = {0,0,0};
        vector[x] = 1;
    }
    if(help != 0){
        for (int i = help; i > 0; i--)
    {
        if(i%2 == 0){
            if (vector[2] == 1)
            {
                vector[1] = 1;
                vector[2] = 0;
            }
            else if(vector[1] == 1){
                vector[2] = 1;
                vector[1] = 0;
            }
        }
        else{
            if (vector[0] == 1)
            {
                vector[0] = 0;
                vector[1] = 1;
            }
            else if(vector[1] == 1){
                vector[0] = 1;
                vector[1] = 0;
            }
        }
    }
    }
    else{
        
    }
    for (int i = 0; i < 3; i++)
    {
        if(vector[i]){
            cout << i;
            break;
        }
    }
    }
    
    