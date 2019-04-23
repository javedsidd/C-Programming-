/*
	Bubble sort Algorithm:
	In bubble sort we will jurepeatedly comapring the two adjustment element and switching their order if they exist in wrong order
	
	Inner loop: j=0 to j > n-i-1 -->compares the adjuscent element and do the swapping
	outler loop: i=0 to i > n-1 ----> no of passes
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


void fill_array(int*,int);
void print_array_rec(int*,int);

void bubble_sort(int *, int);
void swap(int*,int*);

int main()
{
	int num;
	printf("Enter the number of element:");
	scanf("%d",&num);
	
	int arr[num];
	fill_array(arr,num);
	printf("\nArray Elements before sorting:\n");
	print_array_rec(arr,num);
	bubble_sort(arr,num);
	printf("\nArray Elements After sorting:\n");
	print_array_rec(arr,num);
printf("\n");
}

void bubble_sort(int *a, int len)
{
int i=0,j=0,pass=0,swap_count=0;
int swapped=0;
	for(i=0; i< len-1 ;i++)
	{
		swapped=0;
		printf("\npass: %d\n",pass);
		for(j=0; j< len-i-1; j++)
		{
			if(a[j] > a[j+1])
			{
				swap(&a[j],&a[j+1]);
				printf("swaping: a[%d] > a[%d]\ta[%d]:%d a[%d]:%d\n",j,j+1,j,a[j],j+1,a[j+1]);
				swapped=1;
				swap_count++;
			}
		}
		printf("array elements after pass:%d\n",pass);
		print_array_rec(a,len);
		pass++;	
		if(swapped==0) //return in no swapping happened in the previous pass to avoid further passes -->array is already sorted now
			break;
		
	}
printf("\ntotal %d swapping happened to sort the array\n",swap_count);	
}

void swap(int *n1, int *n2)
{
	int temp=*n1;
	*n1=*n2;
	*n2=temp;
}

void print_array_rec(int*a ,int len)
{
	if(len==0)
		return;
	else
	{
		print_array_rec(a,--len);
		printf("%d ",a[len]);
	}

}
void fill_array(int* a,int len)
{
	int i;
	srand(time(0));
	for(i=0; i< len; i++)
	{
		a[i]=rand()%20;
	}
}

