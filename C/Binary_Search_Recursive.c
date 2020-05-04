#include <stdio.h>

int BinarySearchRecursive(int array[], int start, int end, int element_to_find);

int main(){

    /* Creating an array of size 10 & variable with justified name */

    int array[10] = {15, 18, 42, 69, 78, 47, 78, 45, 96, 10};
    int element_to_find, element_location_in_array, element_position;

    /* Printing the array we hardcoded */

    printf("\nThe array which i hardcoded is :- [ ");
    for(int i=0; i<10; i++)
    {
        printf("%d", array[i]);
        if(i == 9)
        {
            printf("");
        }
        else
        {
            printf(", ");
        }
    }
    printf(" ]\n\n");

    /* Taking input of the element to search and finding it */

    printf("Enter element to search from above : ");
    scanf("%d", &element_to_find);

    /* Finding  the element using iterative method */

    element_position = BinarySearchRecursive(array, 0 , 9, element_to_find);

    if (element_position == -1)
    {
        printf("\nNOO We didn't found the element %d\n\n", element_to_find);
    }
    else
    {
        printf("\nYASS We found the element %d in index %d\n\n", element_to_find, element_position);
    }

    return 0;

}

int BinarySearchRecursive(int array[], int start, int end, int element_to_find) {
    if(start>end)
    {
        return -1;
    }
    int mid = (start+end)/2;
    if( array[mid] == element_to_find )
    {
        return mid + 1;
    }
    else if( element_to_find < array[mid] )
    {
        BinarySearchRecursive(array, start, mid-1, element_to_find);
    }
    else
    {
        BinarySearchRecursive(array, mid+1, end, element_to_find);
    }

}
