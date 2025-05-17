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

