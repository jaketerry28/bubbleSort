# Bubble Sort Algorithm

**What is Bubble Sort?**

Bubble sort is a sorting algorithim where the largest values will "bubble" to the top. This algorithim repeatly goes through a list, comparing adjacent values, then swapping them if they are out of order until completion of the sort. This program will utilize pointers in order to pass by reference 
# Table of Contents

We will need 3 functions:

| Function | Description |
|----------|-------------|
| [printValues](#values) | Prints out array at each step |
| [sort](#sort) | Compares two values, swaps if conditions satisfy  |
| [swap](#swap) | Swap the values  |
| [main](#main) | Executes all latter functions |



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


## main 

