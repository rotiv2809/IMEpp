#include<iostream>
#include<vector>
#include<set>
#include<map>

using namespace std;

int verificaElementosFaltando(const std::set<long int>& conjunto, int limiteSuperior) {

    // Itera sobre todos os elementos possíveis até o limite superior
    for (int i = 0; i < limiteSuperior; ++i) {
        // Verifica se o elemento atual não está presente no conjunto
        if (conjunto.find(i) == conjunto.end()) {
            return i;
        }
    }
    return 0;
}

void merge(long int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int *a, *b;
    a = (int*)malloc(n1*sizeof(long int));
    b = (int*)malloc(n2*sizeof(long int));
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[1+mid+i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i<n1 && j<n2)
    {
        if(a[i]<b[j]){
            arr[k] = a[i];
            i++, k++;
        }
        else{
            arr[k] = b[j];
            j++, k++;
        }
    }
    while (i<n1)
    {
        arr[k] = a[i];
        i++, k++;
    }
    while (j<n2)
    {
        arr[k] = b[j];
        j++, k++;
    }
}

void merge_sort(long int arr[],long int l,long int r){
    if (l<r){
        int mid = (l+r)/2;
        merge_sort(arr, l, mid);
        merge_sort(arr,mid+1, r);
        merge(arr, l, mid, r);
    }
}

int main(){
    long int n, x;
    long int *arr;
    vector <long int> vector;
    map <long int, long int> map;
    set <long int> set;
    std::cin>>n>>x;
    int l = 0, r = n - 1;
    arr = (long int*)malloc(n*sizeof(long int));
    for (long int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (long int i = 0; i < n; i++)
    { 
        map[arr[i]] = i;
    }
    for (long int i = 0; i < n; i++)
    {
        set.insert(map[arr[i]]);
    }
    merge_sort(arr, 0, n-1);
    while (l<r)
    {
        if (arr[l]+arr[r] > x)
        {
            r = r - 1;
        }
        else if (arr[l] + arr[r] < x)
        {
            l = l + 1;
        }
        else{
            vector.push_back(l);
            vector.push_back(r);
            break;
        }
    }
    if (vector.size() == NULL)
    {
        cout << -1;
    }
    else{
        if (map[arr[r]] > map[arr[l]]) cout << map[arr[l]]+1 <<' '<< map[arr[r]]+1;
        else if (map[arr[r]] < map[arr[l]])cout << map[arr[r]]+1 <<' '<< map[arr[l]]+1;
        else cout << verificaElementosFaltando(set,set.size()) + 1<<' '<< map[arr[l]]+1;
    }
}

// ta dando errado no teste 9 