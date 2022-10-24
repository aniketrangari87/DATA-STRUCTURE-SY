#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

void traverse(struct node *ptr){

    while (ptr!=NULL)
    {
      printf(" %d ",ptr->data);
      ptr=ptr->next;
    }
    
}
void merge(struct node *first,struct node *second ){

    while (first->next!=NULL)
    {
        first=first->next;
    }
    first->next=second;
    
}
int main()
{

    struct node *start, *second, *third;
    struct node *fourth, *fifth, *sixth;
    // Linked list 1
    start = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    start->data = 100;
    second->data = 200;
    third->data = 300;
    start->next=second;
    second->next=third;
    third->next=NULL;
    // Linked list 2
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    sixth = (struct node *)malloc(sizeof(struct node));

    fourth->data = 1000;
    fifth->data = 2000;
    sixth->data = 3000;

    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;
printf("\nThe first linked list is :");
    traverse(start);
    printf("\nThe second linked list is :");
     traverse(fourth);
     merge(start,fourth);
     printf("\nThe merged linked list is : ");
     traverse(start);
      
    return 0;
}