#include<iostream>
#include<string>

using namespace std;

int main()
{
    string number;
    cin >> number;
    for (int i = 0; i < number.size(); i++)
    {
        if (number[i] == '1'){
            number[i] = '0';
        }
        else{
            number[i] = '1';
        }
    }
    cout<<number;
    return 0;
}