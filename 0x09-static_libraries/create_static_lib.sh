#!/bin/bash

# Compile each .c file in the current directory to a corresponding .o file
for file in *.c; do
    if [ -f "$file" ]; then
        gcc -c "$file" -o "${file%.c}.o"
    fi
done

# Create the static library liball.a from all the .o files
ar rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up: Remove the .o files
rm -f *.o

echo "Static library liball.a created successfully."
