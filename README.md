# Push_Swap
This project sorts numbers on a stack from the smalles number to the biggest number with a limited set of instructions. The goal is to use the lowest possible amount of actions. Therefore we have two stacks: *stack a* and *stack b*. For the implementation I used the datastructure *linked list* to represent a stack. To presort the numbers, I implemented the K-sort-algorithm.

## 👀 YouTube Video: Code Princess/push_swap Programm Vorstellung/K-Sortierungsalgorithmus/push-swap/push swap/C-Code
<!-- YouTube video cards from https://github.com/DenverCoder1/github-readme-youtube-cards -->
<!-- https://ytcards.demolab.com/?id=<video ID>&title=<video+title>&lang=en&timestamp=<video publish date in Unix time format>&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&max_title_lines=1&width=250&border_radius=5&duration=<video duration in seconds> "<video title>") -->
<!-- BEGIN YOUTUBE-CARDS -->
[![Code Princess/push_swap Programm Vorstellung/K-Sortierungsalgorithmus/push-swap/push swap/C-Code](https://ytcards.demolab.com/?id=a3epgYq_sEY&title=Code-Princess/push_swap+Programm+Vorstellung/K-Sortierungsalgorithmus/push-swap/push+swap/C-Code&lang=en&timestamp=1729202400&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&max_title_lines=1&width=850&border_radius=5&duration=591 "Code Princess/push_swap Programm Vorstellung/K-Sortierungsalgorithmus/push-swap/push swap/C-Code")](https://youtu.be/a3epgYq_sEY?si=Bqkay9j9jpy0e0MK)
<!-- END YOUTUBE-CARDS -->
## The Rules 
You have 2 stacks named *stack a* and *stack b*.
At the beginning: 
- The *stack a* contains a random amount of negative and/or positive numbers which cannot be duplicated.
- The *stack b* is empty.

The goal is to sort in ascending order numbers into *stack a*.
To do so you have the following operations at your disposal:
- **sa (swap a):** Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- **sb (swap b):** Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- **pa (push a):** Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- **pb (push b):** Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- **ra (rotate a):** Shift up all elements of stack a by 1. The first element becomes the last one.
- **rb (rotate b):** Shift up all elements of stack b by 1. The first element becomes the last one.
- **rra (reverse rotate a):** Shift down all elements of stack a by 1. The last element becomes the first one.
- **rrb (reverse rotate b):** Shift down all elements of stack b by 1. The last element becomes the first one.
## Example for operations
To illustrate the effect of some of these instructions, let’s sort a random list of integers!

<img width="260" alt="Screenshot 2024-07-23 111639" src="https://github.com/user-attachments/assets/1a1a6a09-e824-432b-a3d1-77c2b317b2d1">

Integers from *stack a* get sorted in 12 instructions.
## Prerequisites
Please note that this program is only compatible with Linux or macOS. Ensure that you have a C-compiler e.g. cc installed on your operating system.
## Installation
To install the project follow these steps in your terminal:
```
git clone git@github.com:Code-Princess/push_swap.git
cd push_swap
make
```
## Run the program
To run the program, use this command in your terminal:
```
./push_swap 2 1 3 6 5 8
```
or
```
./push_swap "2 1 3 6 5 8"
```

<img width="276" alt="image" src="https://github.com/user-attachments/assets/b0d255eb-d115-4d9c-8182-40e55a6c8134">

You can replace the numbers with any integer numbers of your choice.
