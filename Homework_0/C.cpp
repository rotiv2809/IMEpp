#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int n;
    string names[100], aux("");
    printf("How many contentants are there?");
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>names[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
         if ( > 0)
         {
            aux = names[i];
            names[i] = names[i+1];
            names[i] = aux;
         }
            
        } 
    }
    
}