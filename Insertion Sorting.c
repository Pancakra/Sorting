#include <stdio.h>

void printArray(int array[], int size) 
{
  for (int i = 0; i < size; i++) 
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) 
{
  for (int step = 1; step < size; step++) 
  {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) 
    {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main() 
{
    int data[10],a,n=10;
	printf("masukkan 10 Angka yang kamu mau! : ");
	for(a=0;a<n;a++)
		scanf("%d",&data[a]);
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size);
    printf("Data setelah disusun dari kecil ke besar (Ascending): \n");
    printArray(data, size);
}