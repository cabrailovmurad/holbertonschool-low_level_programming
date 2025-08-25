# 0x15. File descriptors, low level I/O

## Project: Tread lightly, she is near

This project is about using **POSIX system calls** to read and write files in C.  
You are required to implement a function that reads a text file and prints its content to standard output.

---

### Files

- **main.h** - Header file containing function prototypes.
- **0-read_textfile.c** - Implementation of the `read_textfile` function.
- **0-main.c** - Example program to test `read_textfile`.

---

### Function Prototype

```c
ssize_t read_textfile(const char *filename, size_t letters);
