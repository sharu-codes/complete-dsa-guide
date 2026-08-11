#include<stdio.h>
#include<stdlib.h>
void initialize (int*, int);
void display (int*, int);
void sorting (int*, int);
void remove_dup (int*, int, int);
int main()
{
	int *arr;
	int n, pos;
	printf("enter the number of elements: ");
	scanf("%d", &n);
	arr=(int*)malloc(sizeof(int)*n);
	initialize(arr, n);
	printf("\nthe original array is: ");
	display(arr, n);
	printf("\nthe sorted array is: ");
	sorting(arr, n);
	printf("\nenter the position to be based: ");
	scanf("%d", &pos);
	remove_dup(arr, n, pos);
}
void initialize (int *a, int n)
{
	printf("\nenter the elements: ");
	for (int i=0; i<n; i++)
	{
		scanf("%d", a+i);
	}
}
void display (int *a, int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("%d ", *(a+i));
	}
}
void sorting (int *a, int n)
{
	int i, j, temp;
	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (*(a+i) < *(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
	for (i=0; i<n; i++)
	{
		printf("%d ", *(a+i));
	}
}
void remove_dup (int *a, int n, int p)
{
	int i, j, dup;
	int *new_arr= (int*)malloc(sizeof(int)*50);
	int count=0;
	for (i=0; i<n; i++)
	{
		dup=0;
		for (j=0; j<count; j++)
		{
			if (*(a+i)==*(new_arr+j))
			{
				dup=1;
				break;
			}
		}
		if (dup==0)
		{
			*(new_arr+count)=*(a+i);
			count++;
		}
	}
	printf("\nthe modified array is: ");
	for (i=0; i<count; i++)
	{
		printf("%d ", *(new_arr+i));
	}
	printf("\nthe required element is: %d", *(new_arr+p-1));
}
