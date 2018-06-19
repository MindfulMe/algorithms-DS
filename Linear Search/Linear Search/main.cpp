#include <stdio.h>

int main()
{
    int array[10];
    int i, num, keynum, found = 0;
    int position = 0;
    
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("Enter the element to be searched \n");
    scanf("%d", &keynum);
    /*  Linear search begins */
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            position = ++i;
            break;
        }
    }
    if (found == 1)
        printf("Element is present in the array at position %d\n", position);
    else
        printf("Element is not present in the array \n");
}
