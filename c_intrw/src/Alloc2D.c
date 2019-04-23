/*

function name: Alloc2D 
Description: this function will dynamically allocate memory for 2D array by using minimum number of malloc call, which can be accessed by 
		arr[i][j] notation

@param1: no of rows
@param2: no of columns
@param3: void ** to determine for which data type the memory is being allocated
return: void *

*/


#include<stdio.h>
#include<stdlib.h>

void *Alloc2D(int,int,void**);

int main()
{
int i,j;
	int arr[2][3];
	int *a=Alloc2D(2,3,arr);
	a[0][0]=0; 
	a[0][1]=1;
	a[0][2]=3;
	a[1][0]=5;
	printf("Printing int array:\n");
	for(i=0; i<2; i++){
	for(j=0; j<3; j++)
	printf("a[%d][%d]=%d ", i,j,a[i][j]);
	printf("\n"); }

	char c[2][3];
	char *ch=Alloc2D(2,3,c);
	printf("Printing char array:\n");
	ch[0][0]='A'; 
	ch[0][1]='B';
	ch[0][2]='C';
	ch[1][0]='D';
	ch[1][2]='W';

	
	for(i=0; i<2; i++){
	for(j=0; j<3; j++)
	printf("ch[%d][%d]=%c ", i,j,ch[i][j]);
	printf("\n"); }
}



void *Alloc2D(int r, int c , void **a)
{
	return (void*) malloc( r * sizeof( **a )*c);
}
