#include <stdio.h>

void tukar (int *a, int *b)
{
	int sementara = *a;
	*a = *b;
	*b = sementara;
}

void selectionsort (int array[], int size)
{
	int step;
	for ( step = 0; step < size-1; step ++)
	{
		int min_idx = step;
		int i;
		for ( i = step+1; i < size; i++)
		{
			if (array[i] < array[min_idx])
			min_idx = i;
		}
		tukar (&array[min_idx], &array[step]);
	}
}

void cetak(int array[], int size)
{
	int i;
	for ( i = 0; i < size; i++)
	{
		printf ("%d ",array[i]);
	}
	printf ("\n");
}

int main ()
{
	int data[] = {23, 67 , 89 , 5 , 45 , 20 , 15 , 27};
	int size = sizeof(data)/sizeof(data[0]);
	selectionsort (data, size);
	printf ("Data setelah disusun dari kecil ke besar (Ascending): \n");
	cetak(data, size);
}
