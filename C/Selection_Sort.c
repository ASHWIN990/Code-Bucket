/*#### BY ASHWINI SAHU ####*/

#include <stdio.h>

/* Function for storing data in array */

int input_the_array( int array[], int array_size ){

	for ( int i=0; i<array_size; i++ ){

		printf("\nEnter the %d element : ", i+1);
		scanf("%d", &array[i]);
	}

}

/* Function for printing the array */

int print_the_array( int array[], int array_size ){

        for ( int i=0; i<array_size; i++ ){

                printf("%d", array[i]);
                if ( i != array_size-1 )
                {
                        printf(" ,");
                }
                else
                {
                        printf(" ]\n");
                }
        }
}

/* Function for printing sorted array */

int print_the_sorted_array( int array[], int array_size ){

        for ( int i=array_size-1; i>=0; i-- ){

		printf("%d", array[i]);

		if ( i != 0 )
               	{
                       	printf(", ");
               	}
               	else
               	{
                       	printf(" ]\n");
               	}
        }
}

/* Selection Sorting here */

int selection_sort( int array[], int array_size ){

	int swap( int *tmp, int *tmp2){

		int temp;
		temp = *tmp;
		*tmp = *tmp2;
		*tmp2 = temp;

	}

	int min_val;
	for ( int i=0; i<array_size-1; i++ ){
		min_val=i;
        	for (int j = i+1; j < array_size; j++){

			/* Finding the smallest int in the array */

           		if (array[j] > array[min_val]){
				min_val=j;
			}
		}
	swap(&array[min_val], &array[i]);
	}
}

int main() {

	/* Declaring variables and array too */

	int array_size;
	int array[100];

	printf("\nBubble Sorting program\n");

	printf("\nEnter the size of array : ");
	scanf("%d", &array_size);

	/* Taking the input from user and storing it to the array */

	input_the_array( array,  array_size );

	/* Printing the array */

        printf("\nThe elements in array is : [ ");
	print_the_array( array, array_size );

	/* Running the Selection Sort algorithm */

	printf("\nSORTING THE ARRAY USING SELECTION SORT\n");
	selection_sort( array, array_size );

        /* Printing the sorted array */

	printf("\nThe sorted elements in array is : [ ");
        print_the_sorted_array( array, array_size );

	/* Freeing up the memory using the free() */

	return 0;

}
