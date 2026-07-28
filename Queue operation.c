#include <stdio.h>
#include <stdlib.h> 
int q[10], size, front = 0, rear = -1;
void Qinsert()
{
    int item;
    if (rear == size - 1)
    {
        printf("Queue is full\n");
        return;
    }
    printf("Enter the item to insert in Queue: ");
    scanf("%d", &item);
    rear = rear + 1;
    q[rear] = item;
}

void Qdelete()
{
    if (front > rear)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted item from Queue is %d\n", q[front]);
    front = front + 1;
    if (front > rear)
    {
        

        front = 0;
        rear = -1;
    }
}

void Qdisplay()
{
    int i;
    if (front > rear)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Items in Queue are: ");
    for (i = front; i <= rear; i++)
        printf("%d\t", q[i]);
    printf("\n");
}

int main()
{
    int ch;
    printf("Enter the size of Queue (max 10): ");
    scanf("%d", &size);

    while (1)
    {
        printf("\nQueue Operations:\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("You selected insert\n");
            Qinsert();
            break;
        case 2:
            printf("You selected delete\n");
            Qdelete();
            break;
        case 3:
            printf("You selected display\n");
            Qdisplay();
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("You selected wrong option\n");
        }
    }

    return 0;
}