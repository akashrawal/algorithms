# Ordered lists

## Concepts
- Comparator
  - Takes 2 elements say `a` and `b`
  - Returns if `a` < `b`, `a` = `b`, or `a` > `b`

Integer comparison
```c
int compare(int a, int b) {
    return a - b;
}
```

String comparison
```c
int compare(const char* a, const char* b) {
    int i;
    for (i = 0; a[i] && b[i]; i++) {
        if (a[i] != b[i])
            break;
    }
    return a[i] - b[i];
}
```

## Binary search
- To search for element in a sorted list
  - Start with whole array as the range (0..len)
  - In each iteration:
    - Pick a center element `c = (l - r) / 2`
    - Compare `arr[c]` with the element
    - Accordingly adjust `l` and `r` of the range
  - Result
    - Found: 'arr[c] == needle`
    - Not found:
      - `l == r`
      - `arr[l - 1] < needle < arr[l]`
      - `arr[r - 1] < needle < arr[r]`

## Selection sort
- In each iteration
  - Find smallest element from `input` array
  - Fast-delete the element from `input` array
  - Append the element to `output` array
  - Repeat till `input` array is empty
- `input` and `output` may be partitions of the same array,
  for in-place sorting.

```
Input:
7   5   3   29   23   2   19   17   13   11   
Iteration 0
2  |  5  3  29  23  7  19  17  13  11  
Iteration 1
2  3  |  5  29  23  7  19  17  13  11  
Iteration 2
2  3  5  |  29  23  7  19  17  13  11  
Iteration 3
2  3  5  7  |  23  29  19  17  13  11  
Iteration 4
2  3  5  7  11  |  29  19  17  13  23  
Iteration 5
2  3  5  7  11  13  |  19  17  29  23  
Iteration 6
2  3  5  7  11  13  17  |  19  29  23  
Iteration 7
2  3  5  7  11  13  17  19  |  29  23  
Iteration 8
2  3  5  7  11  13  17  19  23  |  29  
Iteration 9
2  3  5  7  11  13  17  19  23  29  |  
```

## Insertion sort
- In each iteration
  - Delete any element from `input` array. Usually this is the first or last
    element, as this can be done quickly.
  - Insert the element in the correct location in the `output` array.
  - Repeat till input array is empty
- `input` and `output` may be partitions of the same array,
  for in-place sorting.

```
Input:
7   5   3   29   23   2   19   17   13   11   
Iteration 0
7  |  5  3  29  23  2  19  17  13  11  
Iteration 1
5  7  |  3  29  23  2  19  17  13  11  
Iteration 2
3  5  7  |  29  23  2  19  17  13  11  
Iteration 3
3  5  7  29  |  23  2  19  17  13  11  
Iteration 4
3  5  7  23  29  |  2  19  17  13  11  
Iteration 5
2  3  5  7  23  29  |  19  17  13  11  
Iteration 6
2  3  5  7  19  23  29  |  17  13  11  
Iteration 7
2  3  5  7  17  19  23  29  |  13  11  
Iteration 8
2  3  5  7  13  17  19  23  29  |  11  
Iteration 9
2  3  5  7  11  13  17  19  23  29  |  
```

## Bubble sort
- Basic operation: compare-and-swap
- In each iteration, sink the largest element to the bottom 
  using compare-and-swap.
  (or the smallest element to the top)
- It is the simplest, but usually also the slowest.

```
Input:
7   5   3   29   23   2   19   17   13   11   
Iteration 0
5  3  7  23  2  19  17  13  11  |  29  
Iteration 1
3  5  7  2  19  17  13  11  |  23  29  
Iteration 2
3  5  2  7  17  13  11  |  19  23  29  
Iteration 3
3  2  5  7  13  11  |  17  19  23  29  
Iteration 4
2  3  5  7  11  |  13  17  19  23  29  
Iteration 5
2  3  5  7  |  11  13  17  19  23  29  
Iteration 6
2  3  5  |  7  11  13  17  19  23  29  
Iteration 7
2  3  |  5  7  11  13  17  19  23  29  
Iteration 8
2  |  3  5  7  11  13  17  19  23  29  
Iteration 9
|  2  3  5  7  11  13  17  19  23  29  
```
