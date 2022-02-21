#include <stdio.h>

void bubbleSort(int array[], int size) 
{

  for (int step = 0; step < size - 1; ++step) 
  {
      
    for (int a = 0; a < size - step - 1; ++a) 
    {
      if (array[a] > array[a + 1]) 
      {
        int temp = array[a];
        array[a] = array[a + 1];
        array[a + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) 
{
  for (int a = 0; a < size; ++a)
  {
    printf("%d  ", array[a]);
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
    bubbleSort(data, size);
    printf("Data setelah disusun dari kecil ke besar (Ascending): \n");
    printArray(data, size);
}