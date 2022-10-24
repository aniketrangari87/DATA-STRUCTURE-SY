#include<stdio.h>

void merge(int arr[],int l, int mid,int h){
  int j,i,k;
  int n1=mid-l+1;
  int n2=h-mid;

  int A[n1],B[n2];

  for(i=0;i<n1;i++){
    A[i]=arr[l+i];
    }

  for(j=0;j<n2;j++){
    B[j]=arr[mid+1+j];
  }

 i=0;
 j=0;
 k=l;
  while(i<n1 && j<n2){
    if(A[i]<=B[j]){
        arr[k]=A[i];
        i++;
    }
    else {
        arr[k]=B[j];
        j++;
    }
        k++;
  }
  while(i<n1){
         arr[k]=A[i];
        i++;
        k++;
  }

    while(j<n2){
         arr[k]=B[j];
        j++;
        k++;

  }

}
void mergesort(int arr[],int l, int h ){

 if(l<=h){
    int mid=l+(l+h)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,h);
    merge(arr,l,mid,h);

 }
}


int main (){

    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array .");
    for(int i=0;i<n;i++){

                        scanf("%d",&arr[i]);
                        }
    printf("\nThe array before sort :");
     for(int i=0;i<n;i++){

    printf("%d",arr[i]);
                            }
     mergesort(arr,0,n);

 printf("\nThe array after sort :");
     for(int i=0;i<n;i++){

    printf(" %d ",arr[i]);
    }


return 0;

}
