#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *, int);
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

    insertionSort(array, size);

    for(int i=0; i < size; i++){
        printf("%d  ",array[i]);
    }
    printf("\nCount of permutation %d", permutation_counter);
    printf("\nCount of equal %d", equal_counter);

    return 0;
}

void insertionSort(int *arrayPtr, int length){
    int temp, item;

    for(int i=1; i < length; i++){
        temp = arrayPtr[i];
        item = i - 1;
        while(item >= 0 && arrayPtr[item] > temp){
            permutation_counter++;
            arrayPtr[item+1] = arrayPtr[item];
            arrayPtr[item] = temp;
            item--;
        }
        for(int j=0; j < length; j++){
        printf("%d  ",arrayPtr[j]);
        }
        printf("\n");
    }
}
