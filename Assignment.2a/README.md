Assignment. 2a
=============

**Author:** Mobina Ahmadimasoud  
**Group:** 24.B83-mm  
**Email:** st067173@student.spbu.ru

## Build Instructions
```
make
```

## Run Instructions
```
./myProg
```

## Program Description
This program reads data from a binary file (`input.bin`), reverses the byte order of the entire file, and writes the reversed data to a new binary file (`output.bin`). The program displays the size of the input file in bytes and includes error handling for file operations.

## Implementation Details
- Uses C++17 features (std::filesystem)
- Performs in-place array reversal
- Handles file I/O errors gracefully