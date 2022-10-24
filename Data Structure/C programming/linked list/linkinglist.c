#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

int main()
{

    struct node *head, *newNode, *temp;
    int choice;
    int count = 0;

    head = 0;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the the newNode ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Do you want to continue (0,1) \n ");
        scanf("%d", &choice);
    }
    temp = head;
    printf("The Formed linked list :");
    while (temp != NULL)
    {
        printf(" %d -> ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nThere are %d nodes in the linked list .", count);

    return 0;
}
