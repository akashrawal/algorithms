# Lists

- Simplest data structure
- Multiple elements
- Stores order
- One elements can be contained multiple times.


## Arrays
- Elements are stored in consecutive memory locations.
- No gaps between elements (other than padding)
```
+--------------+--------------+--------------+--------------+--------------+
| #0           | #1           | #2           | #3           | #4           |
+--------------+--------------+--------------+--------------+--------------+
```
- An integer is used to store length separately, if the length is not known 
  at compile time. 

## Index
- Base + Index * Element size
  This calculation is done by the compiler. 
- First index is 0
- Last index is `length - 1`

## Iteration
- A simple `for` loop can do the iteration.
```c
for (i = 0; i < len; i++) {
```
