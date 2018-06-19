#include<stdio.h>
// quick
int arr[] = {99, 98, 67, 51, 40, 39, 19, 17, 4, 1};
int n = sizeof(arr)/sizeof(arr[0]);

int permutation_counter = 0;
int equal_counter = 0;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        equal_counter++;
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {
            permutation_counter++;
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    permutation_counter++;
    printArray(arr, n);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    printf("\n");
    printf("\nCount of permutation %d", permutation_counter);
    printf("\nCount of equals %d\n", equal_counter);

    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    return 0;
}
