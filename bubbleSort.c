// import standard input output header
#include <stdio.h>

// array is a constant size of 9
#define SIZE 9

// function declarations 
void printValues(int* values);
void sort(int*);
void swap(int*, int*);

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

	sort(values);
	printf("After: \n");
	printValues(values);

	return(0);	
} // end main

// function that prints values of array
void printValues(int*){
    int i = 0;
    // step thru array
    for (i = 0; i < SIZE; i++){
        printf("%d) %d \n", i, values[i]);
    } // end for
} // end printValues


