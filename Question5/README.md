# Question 5 - Recovery Mechanisms in vi Editor

## Objective

This task evaluates different recovery mechanisms available in the vi editor after an unexpected system crash.

---

### Command

```bash
touch answer.md
```

**Explanation:**
Created a file to document the recovery mechanisms available in the vi editor.

---

### Command

```bash
touch config.txt
```

**Explanation:**
Created a sample configuration file for demonstrating vi editor usage.

---

### Command

```bash
vim config.txt
```

**Explanation:**
Opened the configuration file in the vi editor for editing and demonstrated how the editor manages files.

---

## Recovery Mechanisms

- **Swap Files (.swp)** – Store unsaved changes and allow recovery after crashes.
- **Undo History** – Allows recently made changes to be reverted.
- **Registers** – Store copied or deleted text temporarily.
- **Backup Files** – Preserve the previously saved version of a file.
- **Auto-Recovery** – Detects swap files and prompts the user to recover unsaved changes.

---

## Recommended Recovery Strategy

The most reliable strategy is to use **swap files together with backup files**, as they preserve both unsaved work and the last saved version of the file.

---

## Conclusion

Using swap files and backup files together provides the most reliable protection against data loss in the vi editor.
