# 0x1B. C - Sorting algorithms & Big O

## Resources:books:
Read or watch:
* [Sorting algorithm](https://intranet.hbtn.io/rltoken/tmzgO7xhCpNgPUxVhLKibw)
* [Big O notation](https://intranet.hbtn.io/rltoken/XrLMaOhUMHfwsFEz15TVow)
* [Sorting algorithms animations](https://intranet.hbtn.io/rltoken/kJ7rgWoqdLnxSnSEoAiFCQ)
* [15 sorting algorithms in 6 minutes](https://intranet.hbtn.io/rltoken/RdvoGNMTJ6Hq34aJ_HmCqA)

---
## Learning Objectives:bulb:
What you should learn from this project:

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

---
## Requirements⚙️
What you should learn from this project:

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm
* Written in: <a href="https://www.cprogramming.com/" target="_blank"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="20" height="20"/>

---
## Tasks ✔️

For each task, create a file (task #)-o. Write the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case

### [0. Bubble sort](./0-bubble_sort.c)
Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm:
* Prototype: void bubble_sort(int *array, size_t size);
* You’re expected to print the array after each time you swap two elements

### [1. Insertion sort](./1-insertion_sort_list.c)
Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
* Prototype: void insertion_sort_list(listint_t \**list);
* You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
* You’re expected to print the list after each time you swap two elements 

### [2. Selection sort](./2-selection_sort.c)
Write a function that sorts an array of integers in ascending order using the Selection sort algorithm
* Prototype: void selection_sort(int *array, size_t size);
* You’re expected to print the array after each time you swap two elements 

### [3. Quick sort](./3-quick_sort.c)
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm
* Prototype: void quick_sort(int *array, size_t size);
* You must implement the Lomuto partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the array after each time you swap two elements (See example below)

---

## Author
* **Peyton Smith** - [peytonbrsmith](https://github.com/peytonbrsmith)
