#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubbleSort(int *, int);
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

    bubbleSort(array, size);


    printf("\nCounter of permutation %d", permutation_counter);
    printf("\nCounter of equal %d", equal_counter);

    return 0;
}

void bubbleSort(int * arrayPtr, int length){
    int temp = 0;
    bool exit = false;

    while(!exit) {
        exit = true;
        for(int counter = 0; counter < (length - 1); counter++){
            equal_counter++;
            if(arrayPtr[counter] > arrayPtr[counter + 1]){
                permutation_counter++;
                temp = arrayPtr[counter];
                arrayPtr[counter] = arrayPtr[counter + 1];
                arrayPtr[counter + 1] = temp;
                exit = false;
            }
        }
        for(int i=0; i < length; i++){
        printf("%d  ",arrayPtr[i]);
        }
        printf("\n");
    }
}
