# Recovery Mechanisms in vi Editor

## 1. Swap Files (.swp)

- Vim automatically creates a swap file while editing.
- If the editor crashes, the swap file can be used to recover unsaved changes.
- Recovery command:

```bash
vim -r filename
```

---

## 2. Undo History

- Undo history allows recently made changes to be reverted.
- It is useful only if the editing session is still available or persistent undo is enabled.
- Undo command:

```text
u
```

---

## 3. Registers

- Registers temporarily store copied and deleted text.
- Deleted content can often be restored from registers.

---

## 4. Backup Files

- Vim can automatically create backup files such as:

```text
filename~
```

- These files preserve the previously saved version.

---

## 5. Auto-Recovery

- When Vim is reopened after a crash, it detects the swap file automatically.
- It offers the user an option to recover unsaved work.

---

# Most Reliable Recovery Strategy

The most reliable recovery strategy is to use the **swap file recovery mechanism** together with **backup files**.

Swap files preserve unsaved changes after an unexpected crash, while backup files protect the previously saved version of the file. Using both mechanisms provides maximum protection against data loss.

---

# Conclusion

The combination of swap files and backup files provides the safest recovery mechanism because it preserves both unsaved edits and the last saved version of the file.
