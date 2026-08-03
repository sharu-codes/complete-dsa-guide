// Linear search on an array in C

#include <stdio.h>

void initialise (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf ("enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i; 
    }
    return -1; 
}

int main()
{
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
	int key;
	printf("enter the element to search: ");
    scanf("%d", &key);
	int pos=linearSearch (arr, n, key);
	if (pos==-1)
	{
		printf("%d is not found in the array", key);
	}
    else
    {
        printf("%d is found at position %d \n", key, pos);
    }
}