#include<stdio.h>
#include<stdlib.h>

void Merge(int arr[],int l,int mid,int h){
    int i,j,k;

    int n1=mid-l+1;
    int n2=h-mid;

    int A[n1],B[n2];
    for (int  i = 0; i < n1; i++)
    {
        A[i]=arr[l+i];
    }
    for (int j = 0; j < n2; j++)
    {
        B[j]=arr[mid+1+j];
    }
    
    i=0;
    j=0;
    k=l;

    while (i<n1 && j<n2 )
    {
        if (A[i]<=B[j])
        {
           arr[k]=A[i];
           i++;
           k++;
        }
        else{
            arr[k]=B[j];
            j++;
            k++;
        }
        
    }
    while (i<n1)
    {
       arr[k]=A[i];
       i++;
       k++;

    }
     while (j<n2)
    {
       arr[k]=B[j];
       j++;
       k++;
       
    }
    
    
}


void Mergesort(int arr[],int l,int h){
    if (l<h)
    {
       int mid=l+(h-l)/2;
      Mergesort(arr,l,mid);
      Mergesort(arr,mid+1,h);
      Merge(arr,l,mid,h);
    }
    
}
int main (){
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    Mergesort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
      printf(" %d ",arr[i]);
    }
    




    return 0; 
}