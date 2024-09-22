
---

# Insertion Sort and InsertionPrimos

This repository contains implementations of **Insertion Sort** and a program called **InsertionPrimos**, which builds on the insertion sorting technique to handle prime numbers.

## Files

### 1. `InsertionSort.cpp`
This file contains the implementation of the **Insertion Sort** algorithm. Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time by comparing and inserting each element into its proper place.

#### How to Compile
To compile the insertion sort program, run the following command:
```bash
g++ -o insertion_sort InsertionSort.cpp
```

#### How to Run
After compiling, you can run the program with:
```bash
./insertion_sort
```

The program will prompt you to enter an array of integers, and then it will output the sorted array using the insertion sort algorithm.

### Example Output:
```
Enter the number of elements: 5
Enter 5 elements: 9 4 1 6 3
Sorted array: 1 3 4 6 9
```

### 2. `InsertionPrimos.cpp`
This file contains a specialized implementation that leverages the insertion sorting algorithm for sorting prime numbers. It identifies prime numbers from a set of inputs, sorts them using the insertion sort technique, and outputs the sorted list of primes.

#### How to Compile
To compile the `InsertionPrimos.cpp` file, use the following command:
```bash
g++ -o insertion_primos InsertionPrimos.cpp
```

#### How to Run
After compiling, you can run the program with:
```bash
./insertion_primos
```

The program will prompt for a list of numbers, extract the prime numbers, and then output the sorted list of primes using the insertion sort algorithm.

### Example Output:
```
Enter the number of elements: 7
Enter 7 elements: 23 11 4 2 19 29 8
Sorted prime numbers: 2 11 19 23 29
```
---