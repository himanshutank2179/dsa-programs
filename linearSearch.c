#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
}
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 10, 15, 20, 25, 30};
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("Enter Number for search:");
    scanf("%d", &element);
    int elementFound = linearSearch(arr, size, element);
    if (elementFound > 0)
        printf("The Element %d was found at index %d \n", element, elementFound);
    else
        printf("Element %d Not Found.", element);
    return 0;
}