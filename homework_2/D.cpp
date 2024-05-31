#include<iostream>
#include<vector>
#include<math.h>
#include<string.h>

using namespace std;

int calculo_de_pot(long long int x,long long int y, long long int n){
    long long int ans = 1;
    while (y>1)
    {
        if (y % 2 == 1){
            ans = (x%n) * ans;
            ans = ans % n;
            y--;
        }
        else{
            x = ((x%n)*(x%n))%n;
            y = y/2;
        }
    }
    return (ans*x);
}

int main(){
    int p, zero;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        long long int x, y, n, z;
        cin >> x >> y >> n;
        z = calculo_de_pot(x, y, n) % n;
        cout << z <<'\n';
    }
    cin >> zero;
}