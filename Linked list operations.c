#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} *head = NULL;

struct node *getnode()
{
    struct node *x;
    x = (struct node *)malloc(sizeof(struct node));
    if (x == NULL)
    {
        printf("Out of memory\n");
        exit(0);
    }
    return x;
}

void insert()
{
    struct node *ptr;
    int item;
    ptr = getnode();
    printf("Enter the value to insert: ");
    scanf("%d", &item);
    ptr->data = item;

    ptr->link = head; // Insert at beginning
    head = ptr;
    printf("Node inserted: %d\n", ptr->data);
}

void delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    ptr = head;
    head = head->link;
    printf("Node %d deleted from the beginning\n", ptr->data);
    free(ptr);
}

void display()
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print, list is empty\n");
        return;
    }
    printf("Contents of singly linked list:\n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n1: Insert\n2: Delete\n3: Display\n4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Please enter the correct choice!\n");
        }
    }
    return 0;
}