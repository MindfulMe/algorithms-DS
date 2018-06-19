#include <stdio.h>
#include <stdlib.h>

void shellSort(int *, int);
int permutation_counter = 0;
int equal_counter = 0;

int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);

    int *array[size];

    for(int i=0; i < size; i++){
        printf("a%d = ", i);
        scanf("%d", &array[i]);
    }

    for(int i=0; i < size; i++){
        printf("%d  ",array[i]);
    }

    printf("\nSorted array\n");

    shellSort(array, size);

    printf("\nCount of permutation %d", permutation_counter);
    printf("\nCount of equals %d", equal_counter);

    return 0;
}

void shellSort(int *a, int N)
{
    int temp = 0;
    for (int d = N/2; d >= 1; d /= 2)
        for (int i = d; i < N; i++){
            equal_counter++;
            for (int j = i; j >= d && a[j-d] > a[j]; j -= d){
                permutation_counter++;
                temp = a[j];
                a[j] = a[j-d];
                a[j-d] = temp;
            }
            for(int i=0; i < N; i++){
            printf("%d  ",a[i]);
        }
        printf("\n");
    }


}
