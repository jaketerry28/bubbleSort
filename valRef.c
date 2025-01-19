// valRef.c
// Pass by value vs pass by reference

#include <stdio.h>

// declare functions
void addOne(int);
void addOnePtr(int*);


int main(){
	int a = 2;
	printf("Before functions: %d \n", a);
	printf("-----------------\n");
	addOne(a);
	printf("After addOne: %d \n", a);
	printf("-----------------\n");
	addOnePtr(&a);
	printf("After addOnePtr: %d \n", a);
	return(0);
}


/* Pass by Value:
 * When passing by value, a copy of the variables value is created inside the function.
 * Changes made to the argument inside the function only apply to the copy.
 * Useful when you need only to read the value and don't want to modify the original.
 */
 void addOne (int var){
	var++;
	printf("Inside addOne: %d \n", var);
} // end addOne



/* Pass by Reference:
 * When passing by reference, a copy of the memory address of the variable is created.
 * Changes made to the argument inside the function directly change the original value.
 * Useful when you need to modify the original variable within a function, or to avoid unnecessary copying.
 */
void addOnePtr (int* varPtr){
	(*varPtr)++;
	printf("Inside addOnePtr: %d \n", *varPtr);
} // end addOnePtr


