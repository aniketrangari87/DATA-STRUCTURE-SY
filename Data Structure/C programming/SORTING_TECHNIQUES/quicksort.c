#include <stdio.h>

void swap(int *ptr, int *pptr)
{
    *ptr = *ptr + *pptr;
    *pptr = *ptr - *pptr;
    *ptr = *ptr - *pptr;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int icounter;
    int count = 0;
    int temp;
    // for (icounter = 1; icounter <= high; icounter++)
    // {
    //     if (pivot >= arr[icounter])
    //     {
    //         count++;
    //     }
    // }
    // int pivotindex = low + count;
    // swap(&arr[pivotindex], &arr[low]);
    int i = low + 1;
    int j = high;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i > j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            //  swap(&arr[i],&arr[j])
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}
void Quicksort(int arr[], int low, int high)
{
    int pi;
    if (low < high)
    {
        pi = partition(arr, low, high);
        Quicksort(arr, low, pi - 1);
        Quicksort(arr, pi + 1, high);
    }
}

int main()
{

    // taking the elements from the user .

    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}