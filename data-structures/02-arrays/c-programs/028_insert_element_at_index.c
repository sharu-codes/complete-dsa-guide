// You are given an array arr(0-based index) and two positive integer index and val. You need to insert an val at given index.

void insertAtIndex(int **arr, int *size, int index, int val) {
    // Code here
    int *newArr = (int*)malloc((*size + 1) * sizeof(int));

    for (int i = 0; i < index; i++) {
        newArr[i] = (*arr)[i];
    }
    
    newArr[index] = val;
    
    for (int i = index; i < *size; i++) {
        newArr[i+1] = (*arr)[i];
    }
    
    free(*arr);
    
    *arr = newArr;
    (*size)++;
}
