# Operating Systems Laboratory Exercises

This repository contains 10 laboratory exercises for the Operating Systems course.  
Each exercise demonstrates the use of essential Linux system calls, process management,  
file operations, and thread creation using the C programming language

All examples include:
- C source code (`main.c`)
- An explanation document (`explanation.md`)
- A compiled executable (`app`)

---

## 📁 Project Structure

example-01/ → Basic file operations  
example-02/ → File reading, writing and mode usage  
example-03/ → Using dup() to duplicate file descriptors  
example-04/ → Creating processes using fork()  
example-05/ → Parent-child synchronization with wait()  
example-06/ → Creating an orphan process  
example-07/ → Creating a zombie process  
example-08/ → Replacing process image using exec()  
example-09/ → Creating threads with pthread_create()  
example-10/ → Thread synchronization using pthread_join()  

---

## 🛠 How to Compile & Run

Each lab folder can be compiled using:

```bash
gcc main.c -o app
./app
```

For thread-related examples (example 09 & 10):

```bash
gcc main.c -o app -lpthread
./app
```

---

## 📝 Short Description of Each Example

### **Example 01 – Basic File Operations**
Introduces file creation and writing using system calls such as `open()`, `write()`, and `close()`.

### **Example 02 – File Read/Write**
Demonstrates how to open files in different modes and perform low-level reading and writing.

### **Example 03 – dup() System Call**
Shows how file descriptors can be duplicated to access the same file through multiple descriptors.

### **Example 04 – fork() System Call**
Explains how parent and child processes execute independently with unique PIDs.

### **Example 05 – wait() System Call**
Illustrates how a parent waits for a child process to finish, enabling synchronization.

### **Example 06 – Orphan Process**
Shows how a child process becomes an orphan when the parent exits first.

### **Example 07 – Zombie Process**
Displays how a child becomes a zombie if the parent does not read its exit status.

### **Example 08 – exec() System Call**
Replaces the current process image with another program such as `ls` or `ps`.

### **Example 09 – Creating Threads**
Uses `pthread_create()` to create a new thread that runs concurrently with the main program.

### **Example 10 – Thread Synchronization**
Uses `pthread_join()` so the main thread waits for the created thread to complete.

---

## 📌 Requirements
- Linux-based operating system  
- GCC compiler  
- pthread library (for thread examples)

---

## 📚 References
- Linux Manual Pages (`man 2 fork`, `man 2 execve`, `man 2 wait`, `man 2 open`)  
- Dextutor OS Programming Tutorials  

---

## 👤 Author
**Azad Özdemir**  
Software Engineering Student  

---

## 📄 License
MIT License
