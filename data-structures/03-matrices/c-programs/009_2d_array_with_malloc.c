#include<stdio.h>
#include<stdlib.h>
void initialize (int**, int, int);
void display (int**, int, int);
int main()
{
	int row, col;
	int i;
	printf("enter the row and column size: ");
	scanf("%d %d", &row, &col);
	int **arr;
	arr=(int**)malloc(sizeof(int*)*row);
	for (i=0; i<row; i++)
	{
		arr[i]=(int*)malloc(sizeof(int)*col);
	}
	initialize (arr, row, col);
	display(arr, row, col);
}
void initialize (int **arr, int row, int col)
{
	int i,j;
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			printf("arr[%d][%d]= ",i, j);
		    scanf("%d", (*(arr+i)+j));
		}
	}
}
void display (int **arr, int row, int col)
{
	int i,j;
	printf("the elements are:\n");
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			printf("%d ", *(*(arr+i)+j));
		}
		printf("\n");
	}
}