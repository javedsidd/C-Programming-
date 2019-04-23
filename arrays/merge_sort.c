
//merge sort 


#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

void populate_array(int *,int);

void print_array(int *,int);

void merge_sort(int *a, int low, int high);
void merge(int *a, int low, int mid, int high);

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

	merge_sort(arr,0,arraySize);

		print_array(arr,arraySize);
	}
return 0;
}


void merge(int *a, int low, int mid, int high)
{
	int left_array_Length=mid-low+1;
	int right_array_length=high-mid;

	int la[left_array_Length+1],ra[right_array_length+1];   //one additional element to put infinity

	//copy the array into left array (lr) and right array (ra);

	int i=0,j=0;
	while(i< left_array_Length)
	{
		la[i]=a[low+i];
		i++;
	}
	
	while(j< right_array_length)
	{
		ra[j++]= a[mid+j];
	}
	

	la[left_array_Length +1]= INT_MAX;
	ra[right_array_length+1]= INT_MAX;

	i=0,j=0;
	int k;
	k=low;
	while(i<left_array_Length && j < right_array_length)
	{
		if(la[i] <= ra[j])
		{
			a[k]=la[i];
			i++;
		}
		else
		{
			a[k]=ra[j];
			j++;
		}
		k++;
	}

	while(i< left_array_Length)
	{
		a[k]=la[i];
		i++;	
		k++;
	}
	
	while(j< right_array_length)
	{
		a[k]=ra[j];
		j++;
		k++;
	}	
}

void merge_sort(int *a, int low, int high)
{
	int mid;

	if(low < high)
	{
		mid= low+ (high-low)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		
		merge(a,low,mid,high);	
	}
}

void populate_array(int *a, int size)
{
	int i;
	srand(time(0));
	for(i=0; i<size ; i++)
	{
		
		a[i]=rand()%11+1;
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
