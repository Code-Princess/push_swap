# Push_Swap
This project sorts numbers on a stack from the smalles number to the biggest number with a limited set of instructions. The goal is to use the lowest possible amount of actions. Therefore we have two stacks: *stack a* and *stack b*. For the implementation I used the datastructure *linked list* to represent a stack.
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
## Example
To illustrate the effect of some of these instructions, let’s sort a random list of integers!

<img width="260" alt="Screenshot 2024-07-23 111639" src="https://github.com/user-attachments/assets/1a1a6a09-e824-432b-a3d1-77c2b317b2d1">

Integers from *stack a* get sorted in 12 instructions.
