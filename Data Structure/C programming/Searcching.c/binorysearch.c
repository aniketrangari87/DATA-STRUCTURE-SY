#include<stdio.h>

int binarysearch(int arr[],int n ,int key ){
    int l=0;
    int h=n;
    
while (l<=h)
{
    int mid=l+(h-l)/2;
    if (arr[mid]==key)
    {
       return mid;
    }
    else if (arr[mid]>key){
        h=mid-1;
    }
    else {
       l=mid+1;
    }
    
}

return -1 ;
}



  int main(){
    int n;
    printf("Enter the size of your arry : \n ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of ypur array : \n ");
for (int  i = 0; i < n; i++)
{
 
    scanf("%d",&arr[i]);
}
int key ;
printf("Enter the element for searching : \n");
scanf("%d",&key);
printf("The element %d is at index %d",key,binarysearch(arr,n,key));
    return 0;
  }