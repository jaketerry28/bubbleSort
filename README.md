# Bubble Sort Algorithm

## Table of Contents

| Function | Description |
|----------|-------------|
| [Overview](#overview)| Objectives and plan |
| [printValues](#printValues) | Prints out array when called |
| [swap](#swap) | Swap two adjacent values |
| [sort](#sort) | Compares two values, calls swap function if needed  |

## Overview

**Objective**

Given an array of 9 integers, sort the array using a "bubble sort" algorithm.

**What is Bubble Sort?**

Bubble sort is a sorting algorithm where the largest values will "bubble" to top (or right side) of an array when executed. This algorithim repeatly goes through a list, comparing adjacent values, then swapping them if they are out of order until completion of the sort. This program will utilize pointers, where we will pass-by-reference to manipulate elements inside of the array.

**Plan**

This program will utilize 3 functions.

1. A function to print the array - [printValues](#printValues)
2. A function to swap two adjacent values of elements inside the array - [swap](#swap) 
3. A function to check if two adjacent elements need to be switched - [sort](#sort) 

## printValues

This function will print out the array in its current state. Will be called upon multiple times throught the main function. This function is designed to print out on a single line.
```

constant MAX is the max length of array
function printValues (array):
	create integer variable i
	print out "[" 
	for i from zero to MAX:
		print array[i]
	print "]"
	    
```

## swap

This function will swap the positions of two adjacent elements. Before conducting the swap, a temporary variable is needed in order to hold the value of an element as it is swapped. Pointers and pass by reference will be necessary at this step. A pass by reference is used since the values inside the array will need to be modified. 

```
fuction swap (integer num1, integer num2):
	create integer variable temp
	give temp the num1 integer
	give num1 the num2 integer
	give num2 the temp integer
```

## sort

To sort the array, a compare is conducted, then a swap is performed if conditions are met. Here, this function checks if a value is greater than the adjacent value to its right. If this condition is met, a swap is performed. This function will continue to loop until the entire array has been sorted.

Two integer variables, *i* and *j*, are created to step through the array. Variable *j* steps through the entire array, checking at each position if a swap is required. If the condition is met, the swap then printValue functions are called. Once *j* has stepped through the array fully, *i* will increment by 1 and the whole process starts over until *i* has stepped through the entire array. 

```

constant MAX is max length of array
function sort (array):
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)

```



