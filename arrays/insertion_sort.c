
//insertion srt 


#include<stdio.h>
#include <stdlib.h>


void populate_array(int *,int);

void print_array(int *,int);

void insertion_sort(int *, int);

int main()
{

	int arraySize;

	while(1)
	{
		printf("\nEnter size of array [-1 to exit]:");
		scanf("%d",&arraySize);
		if(arraySize== -1)
		{	
			printf("\n------ EXITING -----\n");
			return 0;
		}

		int arr[arraySize];

		populate_array(arr,arraySize);
		
		print_array(arr,arraySize);

		insertion_sort(arr,arraySize);

		print_array(arr,arraySize);
	}
return 0;
}

void insertion_sort(int *a, int size)
{
	int i,value,hole;

	for(i=1; i< size ; i++)
	{
		value= a[i];
		hole=i;

		while( hole> 0 && a[hole-1] > value)
		{
			a[hole]=a[hole-1];
			hole=hole-1;
		}

	a[hole]=value;
	}

}

void populate_array(int *a, int size)
{
	int i;
	srand(time(0));
	for(i=0; i<size ; i++)
	{
		
		a[i]=rand()%101+1;
	}
}

void print_array(int *a, int size)
{
	printf("\n----- Displaying Array elements----\n");
	int i;	
	for( i=0; i< size; i++)	
	{
		printf("%d ",a[i]);
	}

printf("\n");
}
