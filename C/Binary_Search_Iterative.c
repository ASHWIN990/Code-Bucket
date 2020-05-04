#include <stdio.h>

int BinarySearchIterative(int array[], int size, int element_to_find);

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

    element_position = BinarySearchIterative(array, 10, element_to_find);

    if (element_position == -1)
    {
        printf("\nNOO We didn't found the element %d\n\n", element_to_find);
    }
    else
    {
        printf("\nYASS We found the element %d in index %d\n\n", element_to_find, element_position + 1);
    }

    return 0;

}

int BinarySearchIterative(int array[], int size, int element_to_find) {
    int start = 0;
    int end = size-1;
    while(start<=end) {
       int mid = (start+end)/2;
       if( array[mid] == element_to_find) {
          return mid;
       } else if( element_to_find < array[mid] ) {
          end = mid-1;
       } else {
          start = mid+1;
       }
    }
    return -1;
}
