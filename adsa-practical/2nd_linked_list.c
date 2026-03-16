#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *insert(struct node *start, int val)
{
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    // Handle empty list
    if (start == NULL)
    {
        return newNode;
    }

    temp = start;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    return start;
}

void display(struct node *start)
{
    struct node *temp = start;
    printf("The elements in the linked list are:\n");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct node *deleteNode(struct node *start, int val)
{
    struct node *temp = start, *prev;

    // Case 1: Deleting head
    if (temp != NULL && temp->data == val)
    {
        start = temp->next;
        free(temp);
        return start;
    }

    // Case 2: Traverse to find the node
    while (temp != NULL && temp->data != val)
    {
        prev = temp;
        temp = temp->next;
    }

    // Value not found
    if (temp == NULL)
        return start;

    // Disconnect and free
    prev->next = temp->next;
    free(temp);

    return start;
}

void search(struct node *start, int val)
{
    struct node *temp = start;
    int pos = 0;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            printf("Element %d found at position %d\n", val, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element %d not found in the linked list\n", val);
}

int main()
{
    int n, val;
    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of elements should be positive.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        start = insert(start, val);
    }

    display(start);

    printf("Enter the value to delete: ");
    scanf("%d", &val);
    start = deleteNode(start, val);
    display(start);

    printf("Enter the value to search: ");
    scanf("%d", &val);
    search(start, val);

    return 0;
}
