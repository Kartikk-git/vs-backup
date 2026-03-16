#include <stdio.h>
#include <stdlib.h>

// double linked list node structure
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start = NULL;
struct node *prev = NULL;

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
    struct node *temp = start;
    struct node *prev = NULL;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == val)
    {
        start = temp->next; // Changed head
        if (start != NULL)
            start->prev = NULL; // Update prev of new head
        free(temp);             // Free old head
        return start;
    }

    // Search for the key to be deleted, keep track of the previous node
    while (temp != NULL && temp->data != val)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL)
        return start;

    // Unlink the node from linked list
    prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = prev;

    free(temp); // Free memory

    return start;
}

int search(struct node *start, int val)
{
    struct node *temp = start;
    int pos = 0;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            printf("Value %d found at position %d\n", val, pos);
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    printf("Value %d not found in the list\n", val);
    return -1;
}

struct node *insertAtEnd(struct node *start, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (start == NULL)
    {
        start = newNode;
        return start;
    }

    struct node *temp = start;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;

    return start;
}

int main()
{
    int n, i, val;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &val);
        start = insertAtEnd(start, val);
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