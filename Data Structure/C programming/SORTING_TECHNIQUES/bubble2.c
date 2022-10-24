#include <stdio.h>
int arr[6]={3,7,1,9,4,7};
void display()
{
    for(int j =0;j<6;j++)
    {
        printf("%d", arr[j]);
    }
    printf("\n");
}
int main()
{
    int temp;
    display();
    for(int i = 0; i<6;i++)
    {
        for (int j =0; j<6-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    display();
    return 0;
}