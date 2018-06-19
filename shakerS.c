#include <stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void shakersort(int a[], int n)
{
    int p, i;
    int k =0;
    int it = 0;
    for (p = 1; p <= n / 2; p++)
    {
        k++;
        
        
        for (i = p - 1; i < n - p; i++)
            if (a[i] > a[i+1]) {
                swap(&a[i], &a[i + 1]);
                it++;
            }
        for (i = n - p - 1; i >= p; i--)
            if (a[i] < a[i-1]) {
                swap(&a[i], &a[i - 1]);
                it++;
            }
    }
    printf("iterations: %d ", k + it);
    printf("swapped: %d ", it);
        printf("\n");

}
int main()
{
    int arr[10] = {99, 98, 67, 51, 40, 39, 19, 17, 4, 1};
    int i;
    for (int j = 0; j<10;j++) {
    shakersort(arr, 10);
    for (i = 0 ; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    }
    return 0;
}
