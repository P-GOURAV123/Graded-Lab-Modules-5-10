# Question 2 - Process Monitoring Using fork()

## Objective

This C program demonstrates Linux process management by creating a child process using `fork()`, monitoring its execution, terminating an unresponsive child process using signals, and preventing zombie processes using `wait()`.

---

### Command

```bash
mkdir screenshots
```

**Explanation:**
Created a folder to store screenshots of program execution and outputs.

---

### Command

```bash
touch process_monitor.c
```

**Explanation:**
Created the C source file that contains the process monitoring program.

---

### Command

```bash
gcc process_monitor.c -o process_monitor
```

**Explanation:**
Compiled the C source code and generated an executable file named `process_monitor`.

---

### Command

```bash
./process_monitor
```

**Explanation:**
Executed the program. The parent process created a child process, monitored its execution, terminated it when it became unresponsive, and prevented it from becoming a zombie process.

---

### Command

```bash
./process_monitor > output.txt
```

**Explanation:**
Executed the program again and redirected its output to `output.txt`.

---

### Command

```bash
cat output.txt
```

**Explanation:**
Displayed the saved output of the program from the output file.

---

## Explanation of Process Management

- **fork()** creates a new child process from the parent process.
- **waitpid()** checks whether the child process has completed execution without blocking the parent.
- **kill()** sends the `SIGKILL` signal to terminate an unresponsive child process.
- **wait()** collects the child's exit status and prevents zombie processes.
- **signal handling** enables the operating system to control or terminate processes safely when required.

---

## Conclusion

The program successfully demonstrated Linux process creation, monitoring, signal handling, and zombie process prevention using `fork()`, `waitpid()`, `kill()`, and `wait()`.
