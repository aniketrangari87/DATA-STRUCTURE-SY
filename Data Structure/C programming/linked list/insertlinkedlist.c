#include<stdio.h>
#include<stdlib.h>

// declaring the structure for the linked list 
struct node {
     int data ;
     struct node *next;

};
// For thr traversal of the list 
void  traverse(struct node *ptr){

    while (ptr!=0)
    {
    printf(" %d ",ptr->data);
    ptr=ptr->next;
    }
    
}
// for insertion at the start 
struct node *insertatbeg(struct node *head ){
    int data;
    printf("\nEnter the data : ");
    scanf("%d",&data);
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;

return ptr;

}
// for the insertion betweeen the list 
struct node *insertafter(struct node *head,struct node *prenode){
 int data;
    printf("\nEnter the data : ");
    scanf("%d",&data);
    struct node *ptr=(struct node* )malloc(sizeof(struct node ));
    ptr->data=data;
    ptr->next=prenode->next;
    prenode->next=ptr;
return head;
}
// for the insertion at the end of the linked list 
struct node *insertatend(struct node *head ){
 int data;
    printf("\nEnter the data : ");
    scanf("%d",&data);
    struct node *ptr=(struct node *)malloc(sizeof( struct node ));
    struct node *p =head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

int main(){

    struct node *head,*first ,*second,*third;
//Locating the memory for the nodes
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
 // inputing the data .
 head->data=100;
 first->data=200;
 second->data=300;
 third->data=400;
 // Linking the nodes 
 head->next=first;
 first->next=second;
 second->next=third;
 third->next=NULL;
while (1)
{
    int choice;
 printf("\n1-inset at start :");
 printf("\n2-inset at end :");
 printf("\n3-inset at between :");
  printf("\n4-exit :");
 scanf("%d",&choice);
 printf("\nThe linked list before inset operation : ");
 traverse(head);
 switch (choice)
 { 
 case 1:
 head=insertatbeg(head);
    break;
 case 2:
 insertatend(head);
    break;
 case 3:
 insertafter(head,first);
    break;
    case 4:
    exit(1);
    break;
 
 default:
 printf("Invalid Input .");
  
 }
  printf("\nThe linked list after inset operation : ");
 traverse(head);
}


 
 return 0;
}