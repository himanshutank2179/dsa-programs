#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indDeletion(int arr[], int size, int capacity, int index)
{
    // Code for deletion
    if (index > capacity)
    {
        return -1;
    }
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, index = 3;
    display(arr, size);
    int isDeleted = indDeletion(arr, size, 100, index);
    if (isDeleted == 1)
    {
        size--;
        printf("Deletion Success");
        printf("\n");
        display(arr, size);
        printf("\n");
        printf("Size is : %d", size);
    }
    else
        printf("Deletion Failed");

    return 0;
}
