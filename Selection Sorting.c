#include <stdio.h>

void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) 
{
  for (int step = 0; step < size - 1; step++) 
  {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) 
    {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    swap(&array[min_idx], &array[step]);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() 
{
    int data[10],a,n=10;
	printf("masukkan 10 Angka yang kamu mau! : ");
	for(a=0;a<n;a++)
		scanf("%d",&data[a]);
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    printf("Data setelah disusun dari kecil ke besar (Ascending): \n");
    printArray(data, size);
}