
// Optimized implementation of Bubble sort
#include <stdio.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++)
    {
        swapped = false;
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        
        // IF no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
        printf("\nSorting array: \n");
        printArray(arr, 16);
    }
}



// Driver program to test above functions
int main()
{
    int arr[] = {21, 13, 106, 28, 14,15,8,10, 9, 11,24,105,99,80,79,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}
