/*
   File containing matrix related function implimentations
date: 24-1-2018 
 */

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int r1,c1,r2,c2;

int r,c;

int  matrix_mul(int [][c1], int [][c2], int res[r1][c2],int r1, int c1 ,int r2, int c2);

int  matrix_add(int [][c1], int [][c2], int res[r1][c2],int r1, int c1 ,int r2, int c2);
int  matrix_sub(int [][c1], int [][c2], int res[r1][c2],int r1, int c1 ,int r2, int c2);

int  matrix_print(int*,int ,int);


int  matrix_transpose(int m[r1][c1],int trasn[c1][r1],int r1, int c1);

int matrix_determinant(int m[r][c],int det);

void matrix_fill(int *, int , int );

void matrix_det(int m[][c1],int , int );



int Is_SquareMatrix(int r ,int c)
{
	if(r==c)
		return 0;
	else
		return -1;
}
//int* matrix_add2(int [][c1], int [][c2],int r1, int c1 ,int r2, int c2);


//int  matrix_mul(int [r1][c1], int [r2][c2], int r1, int c1 ,int r2, int c2);



int main()
{

	int i,j;

			printf("Enter row and col of matrix 1:\n");
				scanf("%d%d",&r1,&c1);

				printf("r1=%d c1=%d\n",r1,c1 );
				int m1[r1][c1];

				//printf("Enter first matrix elements:\n");
				matrix_fill((int*)m1,r1,c1);


				printf("Enter row and col of matrix 2:\n");
				scanf("%d%d",&r2,&c2);
				printf("r2=%d c2=%d\n",r2,c2 );

				int m2[r2][c2];
				//printf("Enter second matrix elements:\n");
				matrix_fill((int*)m2,r2,c2);	

				printf("\nFirst matrix:\n");
				matrix_print((int*)m1,r1,c1);

				printf("\nSecond matrix:\n");
				matrix_print((int*)m2,r2,c2);


				int res[r1][c2];

				if( matrix_mul(m1,m2,res,r1,c1,r2,c2) != -1)
				{
					printf("\nResult Multiplication matrix:\n");
					matrix_print((int *)res,r1,c2);
				}
	
				int add_res[r1][c1];
				if(	matrix_add(m1,m2,add_res,r1,c1,r2,c2) != -1)
				{
					printf("\nResult Addition matrix:\n");
					matrix_print((int*)add_res,r1,c1);
				}


				int sub[r1][c1];
				if(matrix_sub(m1,m2,sub,r1,c1,r2,c2) != -1)
				{						
					printf("\nResult Subtraction matrix:\n");
					matrix_print((int*)sub,r1,c1);
				}
				

				int trans_mat[c1][r1];
				if(matrix_transpose(m1,trans_mat,r1,c1)== 0)
				{	
					printf("\nTranspose matrix:\n");
					matrix_print((int*)trans_mat,c1,r1);
				}



	return 0;
}


int matrix_determinant(int m[r][c],int det)
{
	printf("In matrix_determinant function\n");
}
void matrix_fill(int *m, int r , int c)
{
	int i,j;

	srand(time(0));
	for(i=0; i<r; i++)
	{
		for(j=0; j< c; j++)
		m[i*c+j]= rand()%9;
	}
}


int  matrix_transpose(int m[r1][c1],int trans_mat[c1][r1],int r1, int c1)
{
	int i,j;
	for( i = 0; i < r1; i++)
	{
		for(j = 0; j < c1 ; j++)
		{
			trans_mat[j][i]=m[i][j];
		}
	}	
return 0;
}



int  matrix_print(int *m,int r,int c)
{
	int i,j;
	if(r==0 || c==0)
	{
		printf("\n..Nothing to display..\n"); return -1;
	}
	for(i=0; i< r; i++)
	{
		for(j=0; j<c;j++)
			printf("%4d ",m[(i*c)+j]);	
		printf("\n");
	}
return 0;
}

int matrix_mul(int m1[r1][c1], int m2[r2][c2],int res[r1][c2], int r1, int c1, int r2, int c2)
{
	int i,j,k;

	if(c1!=r2)
	{
		printf("\ncol of first matrix should be equal to row of second matrix for MULTIPLICATION.\n");
		return -1;
	}
	else	
	{

		for(i=0; i<r1 ; i++)
		{
			for(j=0;j<c2; j++)
			{
				res[i][j]=0;
				for(k=0; k< c1; k++)	
				{
					res[i][j]+=m1[i][k]*m2[k][j];
				}	
			}
		}

	}
return 0;
}


/*
int * matrix_add2(int m1[][c1], int m2[][c2],int r1, int c1 ,int r2, int c2)
{
	int i,j;
	int addres[r1][c1];
	if(r1!=r2 && c1!=c2)
	{
		printf("Matrix Addition possible only when rows and columns in both matrix are same.\n");
		return NULL;
	}
	else
	{
		for(i=0; i<r1 ;i++)
		{
			for(j=0;j<c1;j++)
			{
				//add[i][j]=m1[i][j]+m2[i][j];
				addres[i][j]=m1[i][j]+m2[i][j];
			}
		}
	}
	return addres;
}
*/

int  matrix_add(int m1[][c1], int m2[][c2], int res[r1][c1],int r1, int c1 ,int r2, int c2)
{
	int i,j;
	if(r1!=r2 && c1!=c2)
	{
		printf("\nMatrix Addition possible only when rows and columns in both matrix are same.\n");
		return -1;
	}
	else
	{
		for(i=0; i<r1 ;i++)
		{
			for(j=0;j<c1;j++)
			{
				//add[i][j]=m1[i][j]+m2[i][j];
				res[i][j]=m1[i][j]+m2[i][j];
			}
		}
	}
	return 0;
}


int  matrix_sub(int m1[][c1], int m2[][c2], int sub[r1][c1],int r1, int c1 ,int r2, int c2)
{
	int i,j;
	if(r1!=r2 && c1!=c2)
	{
		printf("\nMatrix Subtraction possible only when rows and columns in both matrix are same.\n");
		return -1;
	}
	else
	{
		for(i=0; i<r1 ;i++)
		{
			for(j=0;j<c1;j++)
			{
				sub[i][j]=m1[i][j]-m2[i][j];
			}
		}
	}
	return 0;
}
