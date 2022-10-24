#include<stdio.h>
#include<stdlib.h>

//delclaring  the structure for te node
struct node{

    int data;
    struct node *next;

};
//trversing in the list 
void traverselinkelist(struct node *ptr ){

printf(" \nT he linked list is : ");
while (ptr!=0)
{
printf(" %d ",ptr->data);
ptr=ptr->next;
}

}
// Delete the node at start of the linked list 
struct node *  deletatstar(struct node *start){
      struct node *ptr =start;
if (ptr==NULL)
{
printf("Overflow.");
}


  start=start->next;
  free(ptr);
  return start;

}
// Deleting the node at the given index 
struct node*deleteattheindex(struct node*head, int index){
    struct node *p=head;
    struct node *q=head->next;
for (int  i = 0; i < index-1; i++)
{
 p=p->next;
 q=q->next;
}
p->next=q->next;
free(q);
return head;
}
// Deleting the element at the last .
struct node*deleteatlast(struct node *head){
    struct node *p=head;
    struct node  *q=head->next;
    while (q->next != NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
    
}
int main(){

    struct node *head,*second ,*third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

head->data=100;
second->data=200;
third->data=300;


head->next=second;
second->next=third;
third->next=NULL;

// traverselinkelist(head);
// head=deletatstar(head);
// traverselinkelist(head);
// head=deletatstar(head);
// traverselinkelist(head);
// head=deletatstar(head);
// traverselinkelist(head);
// traverselinkelist(head);
// head=deleteatlast(head);
// traverselinkelist(head);
// head=deleteatlast(head);
// traverselinkelist(head);
traverselinkelist(head);
head=deleteattheindex(head,2);
traverselinkelist(head);
    return 0; 
}