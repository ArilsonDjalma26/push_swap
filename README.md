# 🔄 push_swap

> An algorithmic sorting project written in **C**, developed as part of the 42 School Common Core.

**push_swap** is a project focused on sorting a sequence of integers using two stacks and a limited set of operations.

The main challenge is not simply sorting the numbers, but finding an efficient sequence of operations while minimizing the total number of moves.

---

## 🧠 About the Project

The program receives a sequence of integers as arguments and must sort them in ascending order.

The program works with two stacks:

```text
Stack A                  Stack B

┌───────┐                ┌───────┐
│   4   │                │       │
├───────┤                ├───────┤
│   1   │                │       │
├───────┤                ├───────┤
│   3   │                │       │
├───────┤                ├───────┤
│   2   │                │       │
└───────┘                └───────┘
```

The objective is to sort **Stack A** while leaving **Stack B empty**.

---

## 🎯 Objective

Given:

```bash
./push_swap 4 1 3 2
```

The program must output a valid sequence of operations such as:

```text
pb
sa
pa
...
```

After executing those operations, Stack A must be:

```text
1 2 3 4
```

---

# 📚 Allowed Operations

The project provides a restricted set of operations.

### Swap

```text
sa    Swap the first two elements of A
sb    Swap the first two elements of B
ss    sa + sb
```

### Push

```text
pa    Push the first element of B onto A
pb    Push the first element of A onto B
```

### Rotate

```text
ra    Rotate A upward
rb    Rotate B upward
rr    ra + rb
```

### Reverse Rotate

```text
rra   Reverse rotate A
rrb   Reverse rotate B
rrr   rra + rrb
```

---

# 🔢 Example

Input:

```bash
./push_swap 2 1 3
```

Possible output:

```text
sa
```

Result:

```text
Before:

2
1
3

After:

1
2
3
```

---

# ⚙️ Algorithm

The algorithm used by `push_swap` depends on the size of the input.

A common strategy is to divide the problem into smaller cases and use different approaches depending on the number of elements.

For example:

```text
Small input
     │
     ▼
Specialized sorting
     │
     ▼
Optimized operations

Large input
     │
     ▼
Indexing / normalization
     │
     ▼
Sorting strategy
     │
     ▼
Minimize operations
```

The implementation focuses on reducing the number of operations rather than simply producing a correct sorted result.

---

# 🧮 Indexing

One useful technique is to replace the original values with their relative positions.

Example:

```text
Original:

50  10  30  20  40

Indexed:

4   0   2   1   3
```

This makes it easier to reason about the data and apply sorting algorithms without depending on the actual integer values.

---

# 🧩 Data Structures

The project uses two stacks:

```text
        ┌──────────────┐
        │   Stack A    │
        └──────┬───────┘
               │
               │ operations
               │
        ┌──────▼───────┐
        │   Stack B    │
        └──────────────┘
```

Depending on the implementation, the stacks can be represented using:

* Linked lists
* Arrays
* Node-based structures

---

# 🛠️ Technologies

* **C**
* **Makefile**
* **Linux**
* **Git**
* **GitHub**

---

# 📁 Project Structure

```text
push_swap/
│
├── Makefile
├── README.md
│
├── includes/
│   └── push_swap.h
│
├── src/
│   ├── main.c
│   ├── parsing/
│   ├── operations/
│   ├── sorting/
│   ├── indexing/
│   └── utils/
│
└── libft/
    └── ...
```

> The exact structure may vary depending on the implementation.

---

# ▶️ Compilation

Clone the repository:

```bash
git clone https://github.com/YOUR_USERNAME/push_swap.git
cd push_swap
```

Compile:

```bash
make
```

---

# 🚀 Usage

Run the program with a list of integers:

```bash
./push_swap 4 67 3 87 23
```

The program outputs the operations needed to sort the stack.

Example:

```text
pb
ra
pb
sa
pa
pa
...
```

---

# 🧪 Testing

### Already sorted

```bash
./push_swap 1 2 3 4 5
```

Expected:

```text
(no output)
```

### Reverse sorted

```bash
./push_swap 5 4 3 2 1
```

### Random numbers

```bash
./push_swap 42 7 19 3 81 12
```

### Negative numbers

```bash
./push_swap -5 10 -2 7 0
```

### Duplicate numbers

```bash
./push_swap 1 2 2 3
```

Expected:

```text
Error
```

---

# 🔍 Checking the Result

The output of `push_swap` can be passed to the official checker to verify whether the operations correctly sort the stack.

Example:

```bash
ARG="4 67 3 87 23"

./push_swap $ARG | ./checker_linux $ARG
```

Expected:

```text
OK
```

---

# 📊 Performance

The project is evaluated not only by correctness, but also by the number of operations produced.

The general objective is:

```text
Correctness
     +
Efficiency
     +
Few operations
```

A better algorithm can produce significantly fewer operations for the same input.

---

# 🧠 What I Learned

Through `push_swap`, I improved my understanding of:

* Algorithms.
* Sorting techniques.
* Stack data structures.
* Linked lists.
* Algorithmic complexity.
* Time vs operation count.
* Indexing and normalization.
* Input parsing.
* Error handling.
* Optimization.
* Algorithm design.
* Testing and benchmarking.

Most importantly, the project taught me that **solving a problem is not always enough — the quality of the solution also matters.**

---

# 🎓 42 School

`push_swap` is part of the **42 School Common Core**.

The project challenges students to design an efficient sorting algorithm under strict constraints, encouraging a deeper understanding of algorithms and computational complexity.

---

## 👨‍💻 Author

**Arilson Albano**

42 Luanda — Student Developer

---

⭐ Exploring algorithms, data structures and optimization through the 42 curriculum.
