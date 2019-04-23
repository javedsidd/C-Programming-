/*
   File containing matrix related function implimentations
date: 24-1-2018 
 */

#include<stdio.h>


#define MAT_MUL 1
#define MAT_ADD 2
#define MAT_SUB 3
#define MAT_TRNS 4
#define MAT_DET 5
#define MAT_INV 6


int r1,c1,r2,c2;


void matrix_mul(int [][c1], int [][c2], int res[r1][c2],int r1, int c1 ,int r2, int c2);

void matrix_add(int [][c1], int [][c2], int res[r1][c2],int r1, int c1 ,int r2, int c2);
void matrix_sub(int [][c1], int [][c2], int res[r1][c2],int r1, int c1 ,int r2, int c2);

void matrix_print(int*,int ,int);

void matrix_transpose(int m[r1][c1],int trasn[c1][r1],int r1, int c1);
//int* matrix_add2(int [][c1], int [][c2],int r1, int c1 ,int r2, int c2);


//void matrix_mul(int [r1][c1], int [r2][c2], int r1, int c1 ,int r2, int c2);

int main()
{

	int i,j;
	int cmd;


	printf("Enter the operation you want to do:\n\t\t1- Multiplication\n\t\t2-Addition\n\t\t3-Substraction.\n");
	printf("\t\t4- Transpose\n\t\t5-Determinant\n\t\t6-Inverse.\n");
	scanf("%d",&cmd);

	switch(cmd)
	{

		case MAT_MUL:	printf("Enter row and col of matrix 1:\n");
				scanf("%d%d",&r1,&c1);

				int m1[r1][c1];

				printf("Enter first matrix elements:\n");
				for(i=0; i< r1; i++)
				{
					for(j=0; j<c1;j++)
						scanf("%d",&m1[i][j]);	
				}


				printf("Enter row and col of matrix 2:\n");
				scanf("%d%d",&r2,&c2);

				int m2[r2][c2];

				printf("Enter second matrix elements:\n");
				for(i=0; i< r2; i++)
				{
					for(j=0; j<c2;j++)
						scanf("%d",&m2[i][j]);	
				}


				printf("\nFirst matrix:\n");
				matrix_print((int*)m1,r1,c1);

				printf("\nSecond matrix:\n");
				matrix_print((int*)m2,r2,c2);


				int res[r1][c2];

				matrix_mul(m1,m2,res,r1,c1,r2,c2);
				printf("\nResult Multiplication matrix:\n");
				matrix_print((int *)res,r1,c2);
				break;

		case MAT_ADD: 
				printf("Enter row and col of matrix 1:\n");
				scanf("%d%d",&r1,&c1);

				int m1[r1][c1];

				printf("Enter first matrix elements:\n");
				for(i=0; i< r1; i++)
				{
					for(j=0; j<c1;j++)
						scanf("%d",&m1[i][j]);	
				}


				printf("Enter row and col of matrix 2:\n");
				scanf("%d%d",&r2,&c2);

				int m2[r2][c2];

				printf("Enter second matrix elements:\n");
				for(i=0; i< r2; i++)
				{
					for(j=0; j<c2;j++)
						scanf("%d",&m2[i][j]);	
				}


				printf("\nFirst matrix:\n");
				matrix_print((int*)m1,r1,c1);

				printf("\nSecond matrix:\n");
				matrix_print((int*)m2,r2,c2);

				int add_res[1][c1];
				matrix_add(m1,m2,add_res,r1,c1,r2,c2);
				printf("\nResult Addition matrix:\n");
				matrix_print((int*)add_res,r1,c1);
				/*	int *add;
					add=(int *)matrix_add2(m1,m2,r1,c1,r2,c2);
					printf("\nResult Addition2 matrix:\n");
					matrix_print(add,r1,c1);
				 */

				break;

		case MAT_SUB:	/*Substraction*/
				printf("Enter row and col of matrix 1:\n");
				scanf("%d%d",&r1,&c1);

				int m1[r1][c1];

				printf("Enter first matrix elements:\n");
				for(i=0; i< r1; i++)
				{
					for(j=0; j<c1;j++)
						scanf("%d",&m1[i][j]);	
				}


				printf("Enter row and col of matrix 2:\n");
				scanf("%d%d",&r2,&c2);

				int m2[r2][c2];

				printf("Enter second matrix elements:\n");
				for(i=0; i< r2; i++)
				{
					for(j=0; j<c2;j++)
						scanf("%d",&m2[i][j]);	
				}


				printf("\nFirst matrix:\n");
				matrix_print((int*)m1,r1,c1);

				printf("\nSecond matrix:\n");
				matrix_print((int*)m2,r2,c2);

				int sub[r1][c1];
				matrix_sub(m1,m2,sub,r1,c1,r2,c2);
				printf("\nResult Subtraction matrix:\n");
				matrix_print((int*)sub,r1,c1);
				break;

		case MAT_TRNS:
				printf("Enter row and col of matrix:\n");
				scanf("%d%d",&r1,&c1);
				int m[r1][c1];

				printf("Enter matrix elements:\n");
				for(i=0; i< r1; i++)
				{
					for(j=0; j<c1;j++)
						scanf("%d",&m[i][j]);	
				}

				printf("\nOriginal matrix:\n");
				matrix_print((int*)m,r1,c1);

				int trans_mat[c1][r1];
				matrix_transpose(m,trans_mat,r1,c1);
				printf("\nTranspose matrix:\n");
				matrix_print((int*)trans_mat,r1,c1);
				break;

	}


	return 0;
}


void matrix_transpose(int m[r1][c1],int trans_mat[c1][r1],int r1, int c1)
{
	int i,j;
	for (int i = 0; i < r1; ++i)
	{
		for (j = 0; j < c1 ;++j)
		{
			trans_mat[i][j]=m[j][i];
		}
	}	
}



void matrix_print(int *m,int r,int c)
{
	int i,j;
	for(i=0; i< r; i++)
	{
		for(j=0; j<c;j++)
			printf("%4d ",m[(i*r)+j]);	
		printf("\n");
	}

}

void matrix_mul(int m1[r1][c1], int m2[r2][c2],int res[r1][c2], int r1, int c1, int r2, int c2)
{
	int i,j,k;

	if(c1!=r2)
	{
		printf("col of first matrix should be equal to row of second matrix for MULTIPLICATION.\n");
		return ;
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

}



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

void matrix_add(int m1[][c1], int m2[][c2], int res[r1][c1],int r1, int c1 ,int r2, int c2)
{
	int i,j;
	if(r1!=r2 && c1!=c2)
	{
		printf("Matrix Addition possible only when rows and columns in both matrix are same.\n");
		return;
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
}


void matrix_sub(int m1[][c1], int m2[][c2], int sub[r1][c1],int r1, int c1 ,int r2, int c2)
{
	int i,j;
	if(r1!=r2 && c1!=c2)
	{
		printf("Matrix Subtraction possible only when rows and columns in both matrix are same.\n");
		return;
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
}
