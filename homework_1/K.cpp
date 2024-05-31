#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, i = 1, j = 1, output;
    string palavra_1, palavra_2;
    cin>>n;
    if (n==1)
    {
        cin>>palavra_1;
        cout << palavra_1.size();
    }
    if (n==2){
        cin>>palavra_1>>palavra_2;
        for (int i = 1; i < palavra_1.size(); i++)
        {
            if (i== palavra_2.size() - 1)
            {
                break;
            }
            else{
                if(i != palavra_1.size() - 1){
                    if(palavra_1.substr(i) == palavra_2.substr(palavra_2.size() - i) && palavra_1.substr(i+1) != palavra_2.substr(palavra_2.size() - i - 1)){
                    break;
                }
                }
                else{
                    if(palavra_1.substr(i) == palavra_2.substr(palavra_2.size() - i)){
                        
                    }
                }
                
        }
        
        output = palavra_1.size() + palavra_2.size() - max(i,j);
        cout << output;
    }
}