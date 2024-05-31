#include<iostream>
#include<iostream>
#include<set>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int a=0;
    string texto;
    vector <string> vetor = {"Danil", "Olya", "Slava", "Ann","Nikita"};
    cin>>texto;
    for (int i = 0; i < 5; i++)
    {
        if (texto.find(vetor[i]) != std::string::npos)
        {
            a++;
        }
    }
    if (a != 1)
    {
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}