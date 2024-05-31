#include <bits/stdc++.h>

using namespace std;

// tamanho a, b ou c
// numero máximo de ribbons

int main(){
    int n, a, b, c;
    int i = 1;
    cin >> n >> c >> b >> a;
    vector <int> curl(3);
    vector <int> vector;
    vector.push_back(a);
    vector.push_back(b);
    vector.push_back(c);
    int ans = 0;
    sort(vector.begin(),vector.end());
    int k1, k2, k3;
    k1 = n/vector[0];
    k2 = n/vector[1];
    for (int i = k1; i >= 0; i--)
        for(int j = 0; j<=k2; j++)
            {
                // caso tenha passado do valor, subtrair 1 do i e volta pro j = 0.
                if(i*vector[0] + j*vector[1] > n) break;
                int aux = i*vector[0] + j*vector[1];
                //verificando se a solução é possivel, caso não, passemos direto para o proximo ciclo.
                if((n-aux)%vector[2] != 0) continue;
                //armazenamento do valor maximo das possiveis respostas.
                else{
                    curl[0] = i;
                    curl[1] = j;
                    curl[2] = (n-aux)/vector[2];
                    if(ans < curl[0] + curl[1] + curl[2]) ans = curl[0] + curl[1] + curl[2];
                }
            }
    std::cout << ans;
}

// shift tab