#include <stdio.h>
#define SIZE 10

// hashing

int HashTable[SIZE];

int hash(int key)
{
    return key % SIZE;
}

void insert(int key)
{
    int index = hash(key);
    int i = 0;
    while (HashTable[(index + i) % SIZE] != -1)
    {
        i++;
    }
    HashTable[(index + i) % SIZE] = key;
}

int search(int key)
{
    int index = hash(key);
    int i = 0;
    while (HashTable[(index + i) % SIZE] != -1)
    {
        if (HashTable[(index + i) % SIZE] == key)
        {
            return (index + i) % SIZE;
        }
        i++;
    }
    return -1;
}
void display()
{
    int i;
    printf("Hash Table:\n");
    for (i = 0; i < SIZE; i++)
    {
        if (HashTable[i] != -1)
        {
            printf("%d --> %d\n", i, HashTable[i]);
        }
        else
        {
            printf("%d --> \n", i);
        }
    }
}
void delete(int key)
{
    int index = search(key);
    if (index != -1)
    {
        HashTable[index] = -1;
    }
}
int main()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        HashTable[i] = -1;
    }
    insert(10);
    insert(20);
    insert(30);
    insert(25);
    insert(35);

    display();

    int key = 25;
    int pos = search(key);
    if (pos != -1)
    {
        printf("Key %d found at index %d\n", key, pos);
    }
    else
    {
        printf("Key %d not found\n", key);
    }

    delete(20);
    display();

    return 0;
}