#include <stdio.h>
int main()
{
    int i, arr[10], n, key, low, high, mid;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements (in ascending order): ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to be searched: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else if (arr[mid] == key)
        {
            printf("\nThe number %d found at Position %d", key, mid + 1);
            break;
        }
        else
        {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }

    if (low > high)
        printf("\nThe number %d is not found in given Array", key);
    return 0;
}