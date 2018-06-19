#include <iostream>
using namespace std;

void swap(int *arr, int i)
{
    int tmp;
    tmp = arr[i];
    arr[i] = arr[i - 1];
    arr[i - 1] = tmp;
}

void shakerSort(int *arr, int size)
{
    int left = 1;
    int right = size - 1;
    while (left <= right) { for (int i = right; i >= left; i--)
        if (arr[i - 1] > arr[i]) swap(arr, i);
        left++;
        
        for (int i = left; i <= right; i++) if (arr[i - 1] > arr[i]) swap(arr, i);
        right--;
        
        cout << "\nIteration: " << left - 1;
        cout<<
    }
}

int main()
{
    int size = 0;
    cout << "Array size: "; cin >> size;
    int *A = new int[size];
    
    for (int k = 0; k < size; k++)
    {
        A[k] = 2.7*(size - k)-14; // descending input
        cout << A[k] << " | ";
    }
    
    shakerSort(A, size); // sorting
    
    cout << "\nSorted array::\n";
    for (int k = 0; k < size; k++)
    {
        cout << A[k] << " | ";
    }
    cout << endl;
    
    system("pause");
    return 0;
}
