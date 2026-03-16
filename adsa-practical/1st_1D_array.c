#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main()
{
    int a[MAX] = {10,20,30,40,50};
    int n = 5, i, pos, val;

    printf("Original array elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the position to insert the new element : ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);
    for(i = n; i>= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = val;
    n++;

    printf("Array elements after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the position to delete the element : ");
    scanf("%d", &pos);
    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    printf("Array elements after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the value to search: ");
    scanf("%d", &val);
    for(i = 0; i < n; i++)
    {
        if(a[i] == val)
        {
            printf("Element %d found at position %d\n", val, i);
            break;
        }
    }
    if(i == n)
    {
        printf("Element %d not found in the array\n", val);
    }
    return 0;
}


