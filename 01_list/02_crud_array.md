# CRUD operations on arrays

## Insertion 
- To insert at end:
  - Increase `length` of array by 1
  - Write new element at index `length - 1`

```
                                                            Old length
                                                            V
+--------------+--------------+--------------+--------------+--------------+
| #0           | #1           | #2           | #3           | #4 (new el)  |
+--------------+--------------+--------------+--------------+--------------+
                                                                           ^
                                                                           New length
```

- To insert at beginning:
  - Increase `length` of array by 1
  - Shift elements forwards by 1
  - Write new element at index 0

```
                                                            Old length
                                                            V
+--------------+--------------+--------------+--------------+
| #0           | #1           | #2           | #3           |
+--------------+--------------+--------------+--------------+
                                                             

                                                            Old length
                                                            V
+--------------+--------------+--------------+--------------+--------------+
| #4 (new el)  | #0           | #1           | #2           | #3           |
+--------------+--------------+--------------+--------------+--------------+
                                                                           ^
                                                                           New length
```

- To insert at index `x`
  - Increase `length` of array by 1
  - Shift all elements with index >= `x` by 1
  - Write the new element at index `x`


```
                              x                             Old length
                              V                             V
+--------------+--------------+--------------+--------------+
| #0           | #1           | #2           | #3           |
+--------------+--------------+--------------+--------------+
                                                             

                              x                             Old length
                              V                             V
+--------------+--------------+--------------+--------------+--------------+
| #0           | #1           | #4 (new el)  | #2           | #3           |
+--------------+--------------+--------------+--------------+--------------+
                                                                           ^
                                                                           New length
```

- Insert fast
  - Increase `length` of array by 1
  - Shift element at index `x` to the end
  - Write the new element at index `x`

```
                              x                             Old length
                              V                             V
+--------------+--------------+--------------+--------------+
| #0           | #1           | #2           | #3           |
+--------------+--------------+--------------+--------------+
                                                             

                              x                             Old length
                              V                             V
+--------------+--------------+--------------+--------------+--------------+
| #0           | #1           | #4 (new el)  | #3           | #2           |
+--------------+--------------+--------------+--------------+--------------+
                                                                           ^
                                                                           New length
```


## Deletion
- Order preserving deletion of element x
  - Shift all elements x+1..length backwards by 1
  - Decrease the length by 1
  

```
                              x                                            Old length
                              V                                            V
+--------------+--------------+--------------+--------------+--------------+
| #0           | #1           | #2           | #3           | #4           |
+--------------+--------------+--------------+--------------+--------------+


                              x                                            Old length
                              V                                            V
+--------------+--------------+--------------+--------------+
| #0           | #1           | #3           | #4           |
+--------------+--------------+--------------+--------------+
                                                            ^
                                                            New length
```

- Fast deletion of element x
  - Move the last element to x
  - Decrease the length by 1
  

```
                              x                                            Old length
                              V                                            V
+--------------+--------------+--------------+--------------+--------------+
| #0           | #1           | #2           | #3           | #4           |
+--------------+--------------+--------------+--------------+--------------+


                              x                                            Old length
                              V                                            V
+--------------+--------------+--------------+--------------+
| #0           | #1           | #4           | #3           |
+--------------+--------------+--------------+--------------+
                                                            ^
                                                            New length
```

## Dynamically allocated arrays
- Allocation
  - Dynamically allocated arrays are allocated on heap. Size is not known at
    compile time.
  - Array is re-allocated if there is no space present in the array, 
    or the array is very large for the elements it stores.
- Metadata
  - `array`: Points to memory allocated for the array
  - `len`: Number of elements actually stored in the array
  - `alloc_len`: Total space allocated in the array (`>= len`)
- Resize
  - Steps done
    - Calculate the space needed for the size
    - Allocate memory
    - Copy elements from existing memory to new memory
    - Free the existing memory
  - If the array is too small, usually the length is doubled.
    - This is done to prevent frequent re-allocations when elements are added.

