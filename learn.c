#include <stdio.h>


// constant array of 9 elements
#define MAX 9

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
    //swap(&x, &y);
    printf("x: %d, y: %d \n", x, y);


    return(0);
} // end main

// function that prints values of array
void printValues(int* values){
    int i = 0;
    printf("[");
    // step thru array
    for (i = 0; i < MAX; i++){
        printf("%d ", *(values + i));
    } // end for
    printf("] \n");
} // end printValues

