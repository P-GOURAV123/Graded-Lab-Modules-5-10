#!/bin/bash

echo "Duplicate Submission Checker"

SOURCE="submissions"
BACKUP="backup"
REPORT="report.txt"
ERRORS="errors.txt"

processed=0
duplicates=0
backedup=0

mkdir -p "$BACKUP"

> "$REPORT"
> "$ERRORS"

declare -A hashes

for file in "$SOURCE"/*
do
    if [ -f "$file" ]; then

        ((processed++))

        hash=$(md5sum "$file" | awk '{print $1}')

        if [[ -n "${hashes[$hash]}" ]]; then
            ((duplicates++))
        else
            hashes[$hash]=1
            cp "$file" "$BACKUP/" 2>>"$ERRORS"
            ((backedup++))
        fi

    fi
done

echo "Files Processed : $processed" > "$REPORT"
echo "Duplicate Files : $duplicates" >> "$REPORT"
echo "Files Backed Up : $backedup" >> "$REPORT"

echo "Report Generated Successfully."
