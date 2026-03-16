#include<stdio.h>

//quick sort, merge sort, bubble sort

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                // swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j, temp;
    for (j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            // swap arr[i] and arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // swap arr[i + 1] and arr[high] (or pivot)
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: \n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("\n1.Quick sort\n2.Merge sort\n3.Bubble sort\nChoose sorting algorithm (1-3): ");
    int choice; 
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            quickSort(arr, 0, n-1);
            printf("Sorted array using Quick Sort: \n");
            break;
        case 2:
            mergeSort(arr, 0, n-1);
            printf("Sorted array using Merge Sort: \n");
            break;
        case 3:
            bubbleSort(arr, n);
            printf("Sorted array using Bubble Sort: \n");
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}