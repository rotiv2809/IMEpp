#include<iostream>
#include<set>
#include<cmath>
using namespace std;

void nextt(set<long int>& conjunto, long int number) {
    conjunto.insert(number);
}

void next_query(set<long int>& conjunto, long int number, long int number_query) {
    conjunto.insert((number + number_query) % 1000000000);
}

long int query(set<long int>& conjunto, long int number) {
    auto iterador = conjunto.find(number);
    auto iterador_ub = conjunto.upper_bound(number);
    if (iterador == conjunto.end()) {
        return (iterador_ub == conjunto.end()) ? -1 : *iterador_ub;
    }
    else {
        return *iterador;
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    long int n, number, last_number;
    char signal, last_signal = '+';
    set<long int> conjunto;

    cin >> n;
    for (long int i = 0; i < n; i++) {
        cin >> signal >> number;
        if (signal == '+' && last_signal == '?') {
            next_query(conjunto, number, last_number);
        }
        else if (signal == '+') {
            nextt(conjunto, number);
        }
        else if (signal == '?') {
            last_number = query(conjunto, number);
            cout << query(conjunto, number) << endl;
        }
        last_signal = signal;
    }

    return 0;
}