#include <stdio.h>

int LinearSearch(int array[], int element_to_find,int index);

int main(){

    /* Creating an array of size 10 & variable with justified name */

    int array[10] = {15, 18, 420, 69, 78, 47, 78, 45, 96, 100};
    int element_to_find, element_location_in_array, element_position, index;

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

    /* Searching Recursively an element in array */

    element_position =  LinearSearch(array, element_to_find, 0);

    if (element_position == 0)
    {
        printf("\nNOO We didn't found the element %d\n\n", element_to_find);
    }
    else
    {
        printf("\nYASS We found the element %d in index %d\n\n", element_to_find, element_position);
    }

    return 0;

}

int LinearSearch(int array[], int element_to_find, int index)
{
    int element_location_in_array=0;
    if(index>=10)
    {
        return 0;
    }
        if (array[index] == element_to_find)
        {
            element_location_in_array = index + 1;
            return element_location_in_array;

        }
        else
        {
        return LinearSearch(array, element_to_find, index+1);
        }

    return element_location_in_array;
}
