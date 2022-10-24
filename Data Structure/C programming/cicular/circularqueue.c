#include <stdio.h>
#define max 5
int arr[max];
int front = -1;
int rear = -1;
int Enqueue(int value)
{
    if ((front == 0 && rear == max - 1) ||
        (rear == (front - 1) % (max - 1)))
    {
        printf("\nQueue is Full");
    }

    else if (front == -1)
    {
        front = rear = 0;
        arr[rear] = value;
    }

    else if (rear == max - 1 && front != 0)
    {
        rear = 0;
        arr[rear] = value;
    }

    else
    {
        rear++;
        arr[rear] = value;
    }
}
int Dequeue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return -1;
    }

    int data = arr[front];
    arr[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == max - 1)
        front = 0;
    else
        front++;

    return data;
}
int Displayqueue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return -1;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ", arr[i]);
    }
    else
    {
        for (int i = front; i < max; i++)
            printf("%d ", arr[i]);

        for (int i = 0; i <= rear; i++)
            printf("%d ", arr[i]);
    }
}

int main()
{
    Enqueue(1);
    Enqueue(2);
      Enqueue(3);
    Enqueue(4);
    Displayqueue();
    printf("\nDeleted value is : %d   \n",Dequeue());
    printf("Deleted value is : %d   \n",Dequeue());
    Displayqueue();
     Enqueue(9);
    Enqueue(20);
      Enqueue(5);
      Displayqueue();
      Enqueue(2);
      

    return 0;
}