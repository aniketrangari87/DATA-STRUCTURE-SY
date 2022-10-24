#include <stdio.h>

int main()
{
    int n;
    int j;
    printf("Enter the size of ypur array :");
    scanf("%d", &n);
 // Taking the element from the user 
    int arr[n];
    printf("Enter the elements of the array :");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    // Applhing the insertion sort
    for (int i = 1; i < n; i++)
    {

       j=i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
        
    }
    // Printing the sorted array 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}