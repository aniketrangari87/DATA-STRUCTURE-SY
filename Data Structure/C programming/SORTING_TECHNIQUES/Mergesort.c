#include <stdio.h>
#include <stdlib.h>

void Merge(int arr[], int l, int mid, int h)
{

    int n1 = mid - l + 1;
    int n2 = h - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[], int l, int h)
{

    if (l <= h)
    {
        int mid = (l + h) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, h);
        Merge(arr, l, mid, h);
    }
}

int main()
{
    int n;
    printf("Enter the sizw of Array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    MergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}