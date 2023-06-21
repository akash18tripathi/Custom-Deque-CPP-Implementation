# Custom-Deque-CPP-Implementation

This repository contains a custom implementation of a generic **deque** (double-ended queue) data structure. A deque is a versatile data structure that allows efficient insertion and deletion operations at both ends of the queue.

The provided implementation supports a range of essential operations such as appending and erasing elements, accessing the first and last elements, checking if the deque is empty, and obtaining its current size. Additionally, the deque can be resized dynamically to accommodate changing needs.

The implementation is designed to be generic, meaning it can handle various primitive datatypes, including integers, floats, strings, and more. The time complexities for each operation are clearly stated, providing insights into the efficiency of the deque.

## Features

The deque supports various operations and has the following features:

1. `deque()` - Initializes an empty deque.

   Time complexity: **O(1)**

2. `deque(n, x)` - Initializes a deque of length `n` with all values set to `x`.

   Time complexity: **O(n)**

3. `void push_back(x)` - Appends data `x` at the end of the deque.

   Time complexity: **O(1)**

4. `void pop_back()` - Erases data at the end of the deque.

   Time complexity: **O(1)**

5. `void push_front(x)` - Appends data `x` at the beginning of the deque.

   Time complexity: **O(1)**

6. `void pop_front()` - Erases an element from the beginning of the deque.

   Time complexity: **O(1)**

7. `T front()` - Returns the first element (value) in the deque.

   Time complexity: **O(1)**

8. `T back()` - Returns the last element (value) in the deque.

   Time complexity: **O(1)**

9. `T D[n]` - Returns the `n`th element of the deque. The `[ ]` operator is overloaded for this purpose.

   Time complexity: **O(1)**

10. `bool empty()` - Returns `true` if the deque is empty, otherwise `false`.

    Time complexity: **O(1)**

11. `int size()` - Returns the current size of the deque (the number of elements present).

    Time complexity: **O(1)**

12. `void resize(x, d)` - Dynamically changes the size of the deque to `x`.

    Time complexity: **O(n)**

    - If `x` is greater than the current size, new elements with default value `d` are inserted at the end of the deque.
    - If `x` is smaller than the current size, only the first `x` elements are kept in the deque.

13. `void clear()` - Removes all elements from the deque.

    Time complexity: **O(1)**

Note: The deque is implemented to be generic, meaning it is datatype independent and can support primitive datatypes like integers, floats, strings, etc.

Please refer to the source code for detailed implementation and usage examples.

## Contributions

Contributions are welcome! If you encounter any issues or have suggestions for improvements, please open an issue or submit a pull request.
