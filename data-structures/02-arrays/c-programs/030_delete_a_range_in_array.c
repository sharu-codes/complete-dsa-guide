#include<stdio.h>
#include<stdlib.h>
void initialize (int*, int);
void delete_data (int*, int, int, int);
void display (int*, int);
int main()
{
	int *arr;
	int n, start, end;
	printf("enter the number of elements: ");
	scanf("%d", &n);
	arr=(int*)malloc(sizeof(int)*n);
	initialize (arr, n);
	printf("enter the start and end position: ");
	scanf("%d %d", &start, &end);
	delete_data(arr, n, start, end);
}
void initialize (int *a, int n)
{
	int i;
	printf("enter the elements: ");
	for (i=0; i<n; i++)
	{
		scanf("%d", a+i);
	}
}
void delete_data (int *a, int n, int s, int e)
{
	int i, j;
	for (i=e+1, j=s; i<n; i++, j++)
	{
		*(a+j)=*(a+i);
	}
	n=n-(e-s+1);
	display(a, n);
}
void display (int *a, int n)
{
	int i;
	printf("\nthe modified array is: ");
	for (i=0; i<n; i++)
	{
		printf("%d ", *(a+i));
	}
}