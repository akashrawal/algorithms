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
