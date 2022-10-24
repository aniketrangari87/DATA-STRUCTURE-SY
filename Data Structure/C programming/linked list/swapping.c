
#include<stdio.h>

void swap(int *x, int *y ){
int temp=*x;
*x=*y;
*y=temp;

}
int main(){
    int a=10;
    int b=20;
    printf("The value of a and b before swap are a: %d and b: %d",a,b);
    swap(&a,&b);
     printf("\nThe value of a and b after swap are a: %d and b: %d",a,b);



return 0;
}
