#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função de ordenação Bubble Sort

void bubbleSort(int arr[], int n){
	int i,j;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if(arr[j] > arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

// Função para imprimir o vetor
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main(){
    int n, m, *vector, output = 0;
    cin>>n>>m;
	vector = (int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		cin>>vector[i];
	}
	bubbleSort(vector, n);
	for (int i = 0; i < m; i++)
    {
        output += vector[i];
    }
    
	cout << output;
}