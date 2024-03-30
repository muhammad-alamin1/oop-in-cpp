/*
    get 5 unsigned number
    sorted array smallest to large
    find big number
*/
#include <stdio.h>

#define MAX_SIZE 5

void get_sorted_array(int arr[]);
int largest_value(int arr[]);

int main(void)
{
    unsigned int i, arr[MAX_SIZE], large_value;

    // get numbers
    printf("Enter Five unsigned integer number: ");
    for(i = 0; i < MAX_SIZE; i++)
        scanf("%d", &arr[i]);

    // show data
    printf("\n You Entered integer's are: ");
    for(i = 0; i < MAX_SIZE; i++)
        printf("%d ", arr[i]);

    // after sorting
    get_sorted_array(arr);

    printf("\n\n After Sorting: ");
    for(i = 0; i < MAX_SIZE; i++)
        printf("%d ", arr[i]);

    // largest number
    large_value = largest_value(arr);
    printf("\n\n Large Value: %d", large_value);

    return 0;
}

// sorting array
void get_sorted_array(int arr[])
{
    unsigned int i, j, temp;

    for(i = 0; i < MAX_SIZE; i++)
    {
        for(j = i + 1; j < MAX_SIZE; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// find the largest value
int largest_value(int arr[])
{
    int i, large_value = 0;

    for(i = 0; i < MAX_SIZE; i++)
    {
        if(arr[i] > large_value)
            large_value = arr[i];
    }

    return large_value;
}
