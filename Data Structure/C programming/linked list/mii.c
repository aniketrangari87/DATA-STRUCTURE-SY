/*#include<stdio.h>
#include<stdlib.h>



struct node{

    int data;
    struct node *next;


};

int main(){

    struct node *head,*newNode,*temp;
    int choice;
    int count=0;

head=0;
   while(choice){
     newNode= (struct node *)malloc(sizeof(struct node));


      printf("Enter the the newNode ");
    scanf("%d",&newNode->data);
    newNode->next=NULL;

    if (head==NULL){
        head=temp=newNode;}
        else{
                temp->next=newNode;
        temp=newNode;
        }
printf("Do you want to continue (0,1) \n ");
scanf("%d",&choice);


   }
temp=head;
printf("The Formed linked list :");
while(temp!=NULL){
    printf(" %d -> ",temp->data);
    temp=temp->next;
    count++;
}
printf("\n There are %d nodes in the linked list .",count);


return 0;
}*/
#include<stdio.h>
void print(int a[],int n) //fucntion to print array elements
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
void bubble(int a[],int n) // function to implement bubble sort
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
}
int main()
{
    int i,j,temp,k;

    printf("enter the size of the array :  ");
    scanf("%d",&k);
int a[k];
    printf("\n enter the elements of the array:");
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entered elements are:");
    for(i=0;i<k;i++)
    {
        printf(" \n %d ",a[i]);

    }
    int n=sizeof(a)/sizeof(a[0]);
    printf("Before sorting the array elements are: ");
    print(a,n);
    bubble(a,n);

    printf("\nAfter sorting the array elements are:");

    print(a,n);
 return 0;
}
