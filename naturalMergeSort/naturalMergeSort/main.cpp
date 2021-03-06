/* Recursive C program for merge sort */
#include<stdlib.h>
#include<stdio.h>


void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ,", A[i]);
    printf("\n");
}

/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge(int arr[], int l, int m, int r);

/* l is for left index and r is right index of the sub-array
 of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2; //Same as (l+r)/2 but avoids overflow for large l & h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    
    /* create temp arrays */
    int L[n1], R[n2];
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
        printf("Left sides:\n");
        printArray(L, n1);
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1+ j];
        printf("Right sides:\n");
        printArray(R, n2);
    }
    
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* Function to print an array */


/* Driver program to test above functions */
int main()
{
    int arr[] = {21, 13, 106, 28, 14,15,8,10, 9, 11,24,105,99,80,79,1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Given array is \n");
    printArray(arr, arr_size);
    
    mergeSort(arr, 0, arr_size - 1);
    
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}

