#include <stdio.h>


// constant array of 9 elements
#define MAX 9

void printValues(int* values);
void swap(int*, int*);
void sort(int* values);

int main(){
    int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
    printf("Before: \n");
    printValues(values);

    // test swap
    int x = 3;
    int y = 5;
    printf("x: %d, y: %d \n", x, y);
    swap(&x, &y);
    printf("x: %d, y: %d \n", x, y);

	// sort array
	sort(values);
	printf("After: \n");
	printValues(values);
    return(0);
} // end main

// function that prints values of array
void printValues (int* values){
    int i = 0;
    printf("[");
    // step thru array
    for (i = 0; i < MAX; i++){
        printf("%d ", *(values + i));
    } // end for
    printf("] \n");
} // end printValues


// function that swaps two values
void swap (int* x, int* y ){
	int temp = *x;
	*x = *y;	
	*y = temp;
} // end swap

// function that will sort the array
void sort(int* values){
	int i = 0;
	int j = 0;
	for (i = 0; i < MAX-1; i++){
		for (j = 0; j < MAX-1; j++){
			if (values[j] > values[j+1]){
				swap(&(values[j]), &(values[j+1]));
				printValues(values);
			} // end if
		} // end for
	}	// end for
} // end sort
