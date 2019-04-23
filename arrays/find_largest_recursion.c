/*
 * program to find the lagest element in an array using recursion
 * */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
int find_largest_rec(int *, int);

void fill_array(int*,int);
void print_array_rec(int*,int);

int main()
{
	int num;
	printf("Enter the number of element:");
	scanf("%d",&num);
	
	int arr[num];
	fill_array(arr,num);
	printf("\nArray Elements:");
	print_array_rec(arr,num);
	printf("\nLargset: %d\n",find_largest_rec(arr,num-1));
}

int find_largest_rec(int *a, int len)
{
 static int largest=INT_MIN;
//printf("\nlen :%d a[len]:%d largest:%d",len,a[len],largest);
	if(len==0 )
	{
		if(a[len] > largest)
		largest=a[len];
		return largest;
	}
	else
	{
		if(largest < a[len])
		largest= a[len];
		find_largest_rec(a, --len);
	}
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


