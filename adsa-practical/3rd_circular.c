#include <stdio.h>
#include <stdlib.h>

// circular linked list node structure
struct Node
{
    int data;
    struct Node *next;
};
struct Node *last = NULL;

// function to insert a node at the end of the circular linked list
void insertEnd(int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    if (last == NULL)
    {
        last = newNode;
        last->next = last;
    }
    else
    {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}
// function to display the circular linked list
void display()
{
    if (last == NULL)
    {
        printf("The circular linked list is empty.\n");
        return;
    }
    struct Node *temp = last->next;
    printf("The elements in the circular linked list are:\n");
    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("(back to head)\n");
}
// function to delete a node with a given value
void deleteNode(int val)
{
    if (last == NULL)
    {
        printf("The circular linked list is empty.\n");
        return;
    }
    struct Node *temp = last->next, *prev = last;
    // Case 1: Deleting head node
    if (temp->data == val)
    {
        if (temp == last)
        { // only one node
            free(temp);
            last = NULL;
        }
        else
        {
            prev->next = temp->next;
            free(temp);
        }
        return;
    }
    // Case 2: Traverse to find the node
    do
    {
        if (temp->data == val)
        {
            prev->next = temp->next;
            if (temp == last)
            { // deleting last node
                last = prev;
            }
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    } while (temp != last->next);
    printf("Element %d not found in the circular linked list\n", val);
}

void search(int val)
{
    if (last == NULL)
    {
        printf("The circular linked list is empty.\n");
        return;
    }
    struct Node *temp = last->next;
    int pos = 0;
    do
    {
        if (temp->data == val)
        {
            printf("Element %d found at position %d\n", val, pos);
            return;
        }
        temp = temp->next;
        pos++;
    } while (temp != last->next);
    printf("Element %d not found in the circular linked list\n", val);
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
        insertEnd(val);
    }

    display();

    printf("Enter the value to delete: ");
    scanf("%d", &val);
    deleteNode(val);
    display();

    printf("Enter the value to search: ");
    scanf("%d", &val);
    search(val);

    return 0;
}
