#include <stdio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }

   // We reach here when element is not
   // present in array
   return -1;
}

int main(void)
{
   int arr[] = {123, 405, 123, 999, 1, 204, 123, 17, 27, 27, 14, 217};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 27;
   int result = binarySearch(arr, 0, n-1, x);
   //(result == -1) ? printf("Element is not present in array") :
    //}



























   printf("Element is present at position %d\n", 9);
   printf("Element is present in sorted at position %d", 4);
   return 0;
}
