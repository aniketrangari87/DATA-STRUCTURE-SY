#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};
void peek(node *head)
{
    if (head == NULL)
    {
        cout << "overflow";
    }
    while (head != NULL)
    {
        cout << " " << head->data << " ";
        head = head->next;
    }
}
node *deletefirst(node *head)
{
    node *p = head;
    head = head->next;
    free(p);
    return head;
}
node *deleteatlast(node *head)
{
    node *p = head;
    node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
node *deleteatindex(node *head, int index)
{
    node *p = head;
    node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
node *deleteafter(node *head, int index)
{
  node *ptr1,*ptr;
  int i=0;
  ptr=head;
    while (i<index-1){
        ptr1=ptr;
        ptr=ptr->next;
        i++;
    }
    ptr1->next = ptr->next;
    free(ptr);
    return head;
}
int main()
{
    node *head, *second, *third;
    head = new node();
    second = new node();
    third = new node();
    head->data = 1000;
    second->data = 2000;
    third->data = 3000;
    head->next = second;
    second->next = third;
    third->next = NULL;
    cout << "The Given Linked list is : ";
    peek(head);
    head = deleteafter(head,3);
    cout << endl;
    cout << "The Given Linked list after delete at first  is : ";
    peek(head);

    return 0;
}