#include<stdio.h>
#include<stdlib.h>

// declaring the structure for the linked list 
struct node {
     int data ;
     struct node *next;

};
// For thr traversal of the list 
void  Linkedlisrtraverse(struct node *ptr){

    while (ptr!=0)
    {
    printf(" %d ",ptr->data);
    ptr=ptr->next;
    }
    
}
// for insertion at the start 
struct node *insertatbeg(struct node *head, int data ){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;

return ptr;

}
// for the insertion betweeen the list 
struct node *insertinbetween(struct node *head ,int data,struct node *prenode){

    struct node *ptr=(struct node* )malloc(sizeof(struct node ));
    ptr->data=data;
    ptr->next=prenode->next;
    prenode->next=ptr;
return head;
}
// for the insertion at the given index 
struct node *insertatindex(struct node *head,struct node*p,int data ){

    struct node *ptr=(struct node *)malloc(sizeof (struct node));
    struct node *p=head;
    
    
    while(p->next!=NULL){
        p=p->next;
    
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;


}
// for the insertion at the end of the linked list 
struct node *insertatend(struct node *head,int data ){

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

 int choice;
 printf("1-inset at start :\n");
 printf("2-inset at end :\n");
 printf("3-inset at index :\n");
 printf("4-inset at between :\n");
 scanf("%d",&choice);
 switch (choice)
 { 
 case 1:
 head=insertatbeg(head,1000);
    break;
 case 2:
 insertatend(head,1000);
    break;
 case 3:
 insertatindex(head,third,1000);
    break;
 case 4:
 insertinbetween(head,1000,third);
    break;
 
 default:
 printf("Invalid Input .");
  
 }
 printf("The given linked list : ");
 Linkedlisrtraverse(head);
 printf("\n The linked list after the operation is  : ");
 Linkedlisrtraverse(head);

 /*//the given linked list 
printf("The Linked List is : ");
Linkedlisrtraverse(head);
//For insertion of the element at the begining 
head=insertatbeg(head,45);
printf("\nThe Linked List  after insertion at beg is : ");
Linkedlisrtraverse(head);
//for the insertion of the element at the given index
insertatindex(head,3,55);
printf("\nThe Linked List  after insertion at index is : ");
Linkedlisrtraverse(head);
//for the insertion of the element at the end of the linked list 
insertatend(head,900);
printf("\nThe Linked List  after insertion at the end  is : ");
Linkedlisrtraverse(head);
//for the insertion of the element in between the linked list 
insertinbetween(head,1200,second);
printf("\nThe Linked List is between  is : ");
Linkedlisrtraverse(head);
*/



    return 0;
}