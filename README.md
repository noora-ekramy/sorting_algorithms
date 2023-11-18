# Sorting Algorithms

This repository contains implementations of various sorting algorithms in C.

## Implemented Algorithms

0. [Bubble Sort](#bubble-sort)
1. [Insertion Sort](#insertion-sort)
2. [Selection Sort](#selection-sort)
3. [Shell Sort](#shell-sort)

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

## Insertion Sort

### Files

- [1-insertion_sort_list.c](1-insertion_sort_list.c) - Insertion sort implementation.
- [1-main.c](1-main.c) - Main function to test the Insertion sort.
- [bubble_sort_complexity](1-O) - Insertion sort complexity analysis.

### Usage

Compile the code:

```bash
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
./insertion
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

## Shell Sort

### Files

- [100-shell_sort.c](100-shell_sort.c) - Shell sort implementation.
- [100-main.c](100-main.c) - Main function to test the Shell sort.

### Usage

Compile the code:

```bash
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 100-main.c 100-shell_sort.c print_array.c -o shell
./shell
```

