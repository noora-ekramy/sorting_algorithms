# Sorting Algorithms

This repository contains implementations of various sorting algorithms in C.

## Implemented Algorithms

1. [Bubble Sort](#bubble-sort)
2. [Selection Sort](#selection-sort)

## Bubble Sort

### Files

- [0-bubble_sort.c](0-bubble_sort.c) - Bubble sort implementation.
- [0-main.c](0-main.c) - Main function to test the bubble sort.
- [bubble_sort_complexity](0-O) - Bubble sort complexity analysis.

### Usage

Compile the code:

```bash
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89  0-main.c print_array.c .\0-bubble_sort.c  -o bubble
./bubble
```

## Selection Sort

### Files

- [2-selection_sort.c](2-selection_sort.c) - Selection sort implementation.
- [2-main.c](2-main.c) - Main function to test the Selection sort.
- [selection_sort_complexity](2-O) - Selection sort complexity analysis.

### Usage

Compile the code:

```bash
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 2-main.c 2-selection_sort.c print_array.c .\0-bubble_sort.c -o select
./select
```



