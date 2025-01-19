# Bubble Sort Algorithm

## Table of Contents

| Function | Description |
|----------|-------------|
| [Overview](#overview)| Objectives and plan |
| [printValues](#value) | test |
| [printValues](#values) | Prints out array when called |
| [swap](#swap) | Swap two adjacent values |
| [sort](#sort) | Compares two values, calls swap function if needed  |

## Overview

**Objective**

Given an array of 9 integers, sort the array using a "bubble sort" algorithm.

**What is Bubble Sort?**

Bubble sort is a sorting algorithm where the largest values will "bubble" to top (or right side) of an array when executed. This algorithim repeatly goes through a list, comparing adjacent values, then swapping them if they are out of order until completion of the sort. This program will utilize pointers, where we will pass-by-reference to manipulate elements inside of the array.

**Plan**

This program will utilize 3 functions.

1. A function to print the array.
2. A function to swap two adjacent values of elements inside the array.
3. A function to check if two adjacent elements need to be switched. 

## printValues


```

constant MAX is the max length of array
function printValues (array):
	create integer variable i
	print out "[" 
	for i from zero to MAX:
		print array[i]
	print "]"
	    
```

## sort

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

## swap

```

```


