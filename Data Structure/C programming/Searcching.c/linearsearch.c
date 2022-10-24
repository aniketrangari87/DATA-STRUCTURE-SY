#include<stdio.h>

int  linearsearch(int arr[],int n,int key ){
    for (int  i = 0; i < n; i++)
    {
    if (arr[i]==key)
    {
        return i;
    }
    
    }
    return -1;
    
}

int main(){
    int n;
    printf("Enter the size of an array. : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : \n");
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the element for searching : \n");
    scanf("%d",&key);
    printf("Your key element  %d is at index %d",key, linearsearch(arr,n,key));
    return 0;
}