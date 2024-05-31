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
    int n, m, *vector, output;
    cin>>n>>m;
	vector = (int*)malloc(m*sizeof(int));
	for (int i = 0; i < m; i++)
	{
		cin>>vector[i];
	}
	bubbleSort(vector, m);
	output = vector[n-1] - vector[0];
	cout << output;
}