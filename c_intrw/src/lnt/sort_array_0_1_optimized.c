/**
 *sort an array having elements as 0 and 1 in optimized way 
 */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fill_array(int *, int);
void print_array(int *, int);
void sort_array(int *,int);

int main()
{
	int len,i;
	
	printf("Enter array length:");
	scanf("%d",&len);

	int arr[len];

	fill_array(arr,len);
	printf("\nArray before sort:");
	print_array(arr,len);
	sort_array(arr,len);
	printf("\nArray after sort :");
	print_array(arr,len);
printf("\n");
}

void print_array(int *a, int l)
{
	int i=0;
	for(i=0; i< l ; i++)
		printf("%d ",a[i]);
}

void fill_array(int *a, int l)
{
	int i=0;
	srand(time(0));
	for(i=0; i < l; i++)
		a[i]= rand()%2;
}

void sort_array(int *a, int l)
{
	int i, sum=0;
	for(i=0; i<l; i++)
		sum=sum+a[i];

	if(sum==0)
	{
		return;
	}
	else if (sum == l)
	{
		return;
	}
	else
	{
		for(i=0; i< l ; i++)
		{
			if(i< l-sum)
				a[i]=0;
			else
				a[i]=1;
		}
	}
}
