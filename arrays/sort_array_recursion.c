/*
 * sorting an array using recursion
 * */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


void fill_array(int*,int);
void print_array_rec(int*,int);
void swap(int*,int*);

int getMaxElement_Idx(int *,int);
void sort_array_resursion(int *a, int len);

int main()
{
	int num;
	printf("Enter the number of element:");
	scanf("%d",&num);
	
	int arr[num];
	fill_array(arr,num);
	printf("\nArray Elements before sorting:\n");
	print_array_rec(arr,num);

	sort_array_resursion(arr,num);

	printf("\nArray Elements After sorting:\n");
	print_array_rec(arr,num);
printf("\n");
}

void sort_array_resursion(int *a, int len)
{
	int t,max_index;

	if(len>1)
	{
		max_index=getMaxElement_Idx(a,len);
		t=a[len-1];
		a[len-1]=a[max_index];
		a[max_index]=t;
		sort_array_resursion(a,len-1);
	}
}
int getMaxElement_Idx(int *a,int len)
{
	int i,maxIndex=0;
	int max=a[0];
	for(i=1; i< len; i++)
	{
		if( max < a[i])
		{
			max=a[i];
			maxIndex=i;
		}
	}
printf("\n----in getMaxElement_Idx: max:%d maxIndex:%d \n",max,maxIndex);
return maxIndex;	
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


