#include<stdio.h>



int main(){
    int n;
printf("Enter the size of your array : \n");
scanf("%d",&n);

int arr[n];
printf("Enter the elements of your array :\n");

for (int  i = 0; i < n; i++)
{
   scanf("%d",&arr[i]);
}
int counter=0;
while (counter<n-1)
{
    for (int i = 0; i < n-counter-1; i++)
    {
       if (arr[i]>arr[i+1])
       {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
       
       }
       
    }
    counter++;
    
}
printf("The sorted array is : ");
for (int i = 0; i < n; i++)
{
    printf("%d ",arr[i]);
}



    return 0;
}