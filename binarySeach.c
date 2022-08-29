#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    // Keep searching until low <= high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("Enter Number for search:");
    scanf("%d", &element);

    int searchIndex = binarySearch(arr, size, element);

    if (searchIndex > 0)
        printf("The Element %d was found at index %d \n", element, searchIndex);
    else
        printf("Element %d Not Found.", searchIndex);
    return 0;
}