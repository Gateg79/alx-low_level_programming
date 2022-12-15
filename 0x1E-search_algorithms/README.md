# 0x1E. C - Search Algorithms
## About
An introductory project on:
- Search algorithms
- Time complexity
## Requirements
- Ubuntu 20.04 using gcc using the options -Wall -Werror -Wextra -pedantic -std=gnu89
## File Descriptions
**[search_algos.h](search_algos.h)** - header file containing all function prototypes and definitions for types.

###Mandatory
**[0-linear.c](0-linear.c)** - function that searches for a value in an array of integers using the linear search algorithm.

**[1-binary.c](1-binary.c)** - fuction that searches for a value in a sorted array of integers using the binary search algorithm.

**[2-O](2-O)** - time complexity (worst case) of a linear search in an array of size n.

**[3-O](3-O)** - space complexity (worst case) of an iterative linear search algorithm in an array of size n.

**[4-O](4-O)** - time complexity (worst case) of a binary search in an array of size n.

**[5-O](5-O)** - space complexity (worst case) of binary search in an array of size n.

**[6-O](6-O)** - space complexity of this function:
```C
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

### Advanced Task
**[100-jump.c](100-jump.c)** - function that searches for a value in a sorted array of integers using the Jump search algorithm.

**[101-O](101-O)** - `time complexity` (average case) of a jump search in an array of size `n`, using `step = sqrt(n)`.

**[102-interpolation.c](102-interpolation.c)** - function that searches for a value in a sorted array of integers using the Interpolation search algorithm.

**[103-exponential.c](103-exponential.c)** - function that searches for a value in a sorted array of integers using the exponential search algorithm.

**[104-advanced_binary.](104-advanced_binary.c)** - function that searches for the first appearance of a value in a sorted array of integers using the binary search algorithm.

**[105-jump_list.c](105-jump_list.c)** - function that searches for a value in a sorted singly linked list of integers using the jump search algorithm.

**[106-linear_skip.c](106-linear_skip.c)** - function that searches for a value in a sorted skip list of integers.

**[107-O](107-O)** - `time complexity` (average case) of a jump search in a singly linked list of size `n`, using `step = sqrt(n)`.

**[108-O](108-O)** - `time complexity` (average case) of a jump search in a skip list of size `n`, with an express lane using `step = sqrt(n)`
