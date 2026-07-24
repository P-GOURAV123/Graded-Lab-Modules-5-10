# Question 4 - Log File Monitoring Using Linux Commands

## Objective

This task demonstrates how Linux command pipelines can continuously monitor a log file, extract ERROR messages, maintain a separate report file, and suppress unnecessary output.

---

### Command

```bash
mkdir screenshots
```

**Explanation:**
Created a directory to store screenshots of command execution and outputs.

---

### Command

```bash
touch server.log
```

**Explanation:**
Created a sample log file that stores system log messages.

---

### Command

```bash
touch error_report.txt
```

**Explanation:**
Created a file to store extracted ERROR messages.

---

### Command

```bash
touch commands.txt
```

**Explanation:**
Created a file to save the Linux command pipeline used for monitoring the log.

---

### Command

```bash
grep "ERROR" server.log > error_report.txt
```

**Explanation:**
Extracted all ERROR messages from the log file and stored them in a separate report file.

---

### Command

```bash
cat error_report.txt
```

**Explanation:**
Displayed the extracted ERROR messages to verify the report.

---

## Pipeline Used

```bash
tail -f server.log | grep "ERROR" >> error_report.txt 2>/dev/null
```

---

## Linux Commands Used

- **tail -f** – Continuously monitors newly added log entries.
- **grep** – Filters only lines containing the word `ERROR`.
- **| (Pipe)** – Passes the output of one command directly to another.
- **>>** – Appends extracted log entries to the report file.
- **2>/dev/null** – Suppresses unnecessary error messages by redirecting them to `/dev/null`.

---

## Conclusion

The command pipeline successfully demonstrates Linux log monitoring by filtering ERROR messages and maintaining a separate report file while using pipes and redirection to improve efficiency.
