# Singly linked list

- Each element contains
  - `data`: What you need to store
  - `next`: Pointer to next element, or `null`

```
                     
   list
     |
     V
 +---------------+         +---------------+          +---------------+
 |       |       |         |       |       |          |       |       |
 |   2   |   ------------->|   3   |   -------------->|   5   | null  |
 |       |       |         |       |       |          |       |       |
 +---------------+         +---------------+          +---------------+
 
```

- An empty list is simply a null pointer.

```
                     
   list
     |
     V
    null
 
```

## Iteration
- State is a pointer to an element
- To go to the next element, follow `next` pointer.
- If the state becomes `null`, end of the list is reached.

```c
List* iter;
for (iter = list; iter; iter = iter->next) {
    ...
}
```

## Freeing a list
- This is mostly same as iteration, visit each element and call `free` on it.
- Make sure to back up the `next` pointer, because that will be gone when
  you free the element.

```c
List* iter, *next;
for (iter = list; iter; iter = next) {
    next = iter->next;

    ...
    free(iter);
}
```


## Prepend an element to a linked list
- Allocate new element
- Set `data` accordingly
- Set `next` field to existing list
- The new element is the start of the new list.


```
Before:

   list
     |
     V
 +---------------+       +---------------+       +---------------+
 |       |       |       |       |       |       |       |       |
 |   2   |   ----------->|   3   |   ----------->|   5   | null  |
 |       |       |       |       |       |       |       |       |
 +---------------+       +---------------+       +---------------+
 

After initializing new element:

   new_list                list
     |                       |
     V                       V
 +---------------+       +---------------+       +---------------+       +---------------+
 |       |       |       |       |       |       |       |       |       |       |       |
 |   7   |   ----------->|   2   |   ----------->|   3   |   ----------->|   5   | null  |
 |       |       |       |       |       |       |       |       |       |       |       |
 +---------------+       +---------------+       +---------------+       +---------------+

Insert completed

   list                        
     |                        
     V                        
 +---------------+       +---------------+       +---------------+       +---------------+
 |       |       |       |       |       |       |       |       |       |       |       |
 |   7   |   ----------->|   2   |   ----------->|   3   |   ----------->|   5   | null  |
 |       |       |       |       |       |       |       |       |       |       |       |
 +---------------+       +---------------+       +---------------+       +---------------+
  
```

## Append to a linked list
- Allocate new element
- Set `data` accordingly
- Find the last element of the list
  - If the list is empty, then new element is now the start of the list.
  - Otherwise, change the last element's `next` pointer to the new element.

```
Before:

   list
     |
     V
 +---------------+       +---------------+       +---------------+
 |       |       |       |       |       |       |       |       |
 |   2   |   ----------->|   3   |   ----------->|   5   | null  |
 |       |       |       |       |       |       |       |       |
 +---------------+       +---------------+       +---------------+
 

After initializing new element:

   list                                             last                  new_element
     |                                               |                        |
     V                                               V                        V
 +---------------+       +---------------+       +---------------+       +---------------+
 |       |       |       |       |       |       |       |       |       |       |       |
 |   2   |   ----------->|   3   |   ----------->|   5   |   ----------->|   7   | null  |
 |       |       |       |       |       |       |       |       |       |       |       |
 +---------------+       +---------------+       +---------------+       +---------------+
  
```
