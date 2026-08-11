// Given an array arr that is not completely filled and a value val, you have to insert the value at the end of the array.

void insertAtEnd(int **arr, int *size, int val) {
    // Code here
    int *newArr = (int*)malloc(sizeof(int) * (*size + 1));
    
    for (int i = 0; i < *size; i++) {
        newArr[i] = (*arr)[i];
    }
    
    newArr[*size] = val;
    
    free(*arr);
    *arr = newArr;
    (*size)++;
}
