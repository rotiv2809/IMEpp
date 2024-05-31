#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;

int ans = 0;
int chess[8][8];

bool is_possible(int l, int c){
    int c_1 = 0;
    int c_2 = 0;
    int c_3 = 0;
    int c_4 = 0;

    // linha 

    for (int i = 0; i < 8; i++)
    {
        if (chess[l][i] == 1)
        {
            c_1++;
            break;
        }
    }
    if (c_1 != 0)
    {
        return 0;
    }

    // coluna

    for (int i = 0; i < 8; i++)
    {
        if (chess[i][c] == 1)
        {
            c_2++;
            break;
        }
    }
    if (c_2 != 0)
    {
        return 0;
    }

    // diagonal principal

    for (int i = -min(c,l); i < 8 - max(c,l) ; i++)
    {
        if (chess[l+i][c+i] == 1 )
        {
            c_3++;
        }
    }

    // diagonal secundária;

    if (c + l >= 7)
    {
        for (int i = 0; i < 8 -((l + c) - 7) ; i++)
        {
            if (chess[7 - i][(l+c) - 7 + i] == 1)
            {
                c_4++;
            }
            
        }
    }
    else{
        for (int i = 0; i < ; i++)
        {
            /* code */
        }
        
    }
    
}

int backtracking(vector <int> &queen, int k){
    if (k == 8)
    {
        ans++;
    }
    else{
        for (int i = 0; i < 8; i++)
        {
            if (chess[i][k] == 2)
            {
                continue;
            }
            int aux = queen[k];
            queen[k] = i;
            chess[i][k] = 1;
            
            if (is_possible(i,k))
            {
                backtracking(queen,k+1);
                chess[i][k] = 0;
                queen[k] = aux;
                continue;
            }
            else{
                chess[i][k] = 0;
                queen[k] = aux;
                continue;
            }
        }
        
    }
}
// problema das rainhas
int main(){
    char input[8][8];
    int k = 0;
    for (int i = 0; i < 8; i++)
    for (int j = 0; j < 8; j++)
    {
        cin >> input[i][j];
        if (input[i][j] == '*')
        {
            arr[i][j] = 2;
        }
        else arr[i][j] = 0;
    }
    while (solve_queens(arr, k))
    {
        /* code */
    }
}