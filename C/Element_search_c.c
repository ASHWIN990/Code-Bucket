#include <stdio.h>

int main(){

    /* Creating an array of size 10* & variable with justified name */

    int array[10] = {15, 18, 420, 69, 78, 47, 78, 45, 96, 100};
    int element_to_find, element_location_in_array, did_we_found_the_element;

    /* Printing the array we hardcoded */

    printf("\nThe array which i hardcoded is :- [");
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
    printf("]\n\n");

    /* Taking input of the element to search and finding it */

    printf("Enter element to search from above : ");
    scanf("%d", &element_to_find);

    for(int i=0; i<10; i++)
    {
        if(array[i] == element_to_find)
        {
            did_we_found_the_element = 1;
            element_location_in_array = i + 1;
            break;
        }
    }

    if(did_we_found_the_element == 1)
    {
        printf("\nYASS We found the element %d in index %d\n\n", element_to_find, element_location_in_array);
    }
    else
    {
        printf("\nNOO We didn't found the element %d\n\n", element_to_find);
    }

    return 0;
}
