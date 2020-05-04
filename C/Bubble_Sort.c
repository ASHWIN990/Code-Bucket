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

/* Bubble Sorting here */

int bubble_sort( int array[], int array_size ){

	int swap( int *tmp, int *tmp2){

		int temp;
		temp = *tmp;
		*tmp = *tmp2;
		*tmp2 = temp;

	}

	for ( int i=0; i<array_size; i++ ){
        	for (int j = 0; j < array_size-i-1; j++){

			/* Checking if the element j > j+1 if true interchane them */

           		if (array[j] > array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		}
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

	/* Running the Bubble Sort algorithm */

	printf("\nSORTING THE ARRAY USING BUBBLE SORT\n");
	bubble_sort( array, array_size );

        /* Printing the sorted array */

	printf("\nThe soretd elements in array is : [ ");
        print_the_array( array, array_size );

	return 0;

}
