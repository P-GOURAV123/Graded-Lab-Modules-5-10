# Question 3 - File Processing Using Linux System Calls

## Objective

This program demonstrates file handling using Linux system calls. It creates a file, writes employee records, updates a specific record without rewriting the entire file, retrieves the records efficiently using file positioning, and closes the file after completion.

---

### Command

```bash
mkdir screenshots
```

**Explanation:**
Created a directory to store screenshots of the program execution and outputs.

---

### Command

```bash
touch employee_system.c
```

**Explanation:**
Created the C source file that contains the implementation of the employee record management program.

---

### Command

```bash
touch employee.txt
```

**Explanation:**
Created the file that stores employee records.

---

### Command

```bash
gcc employee_system.c -o employee_system
```

**Explanation:**
Compiled the C source file and generated an executable named `employee_system`.

---

### Command

```bash
./employee_system
```

**Explanation:**
Executed the program to create the employee file, write records, update a record using `lseek()`, and display the final contents.

---

### Command

```bash
cat employee.txt
```

**Explanation:**
Displayed the contents of the employee file to verify that the records were written and updated correctly.

---

## Linux System Calls Used

- **open()** – Creates or opens the employee file with read and write permissions.
- **write()** – Writes employee records into the file.
- **lseek()** – Moves the file pointer to a specific location to update a record without rewriting the whole file.
- **read()** – Reads employee records from the file.
- **close()** – Closes the file and releases the file descriptor.

---

## Conclusion

The program successfully demonstrated file creation, writing, updating, reading, and closing using Linux system calls. Using `lseek()` allowed efficient modification of a specific record without rewriting the complete file.
