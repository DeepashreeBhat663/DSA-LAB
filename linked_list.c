
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} *NODE;

// Function to create a new node
NODE getnode(int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    temp->data = item;
    temp->next = NULL;

    return temp;
}

// Function to display the linked list
void display(NODE head)
{
    if (head == NULL)
    {
        printf("The list is empty\n");
        return;
    }

    printf("LIST: ");

    for (NODE cur = head; cur != NULL; cur = cur->next)
    {
        printf("%d -> ", cur->data);
    }

    printf("NULL\n");
}

int main(void)
{
    int item, n;
    NODE temp, head = NULL, tail = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter an item: ");
        scanf("%d", &item);

        temp = getnode(item);

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    display(head);

    return 0;
}
