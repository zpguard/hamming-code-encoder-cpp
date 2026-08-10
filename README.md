# README.md

# Hamming Code Encoder in C++

A C++ implementation of a **(7,4) Hamming Code encoder** using the Eigen matrix library. This project reads four input data bits from a file, generates parity bits using matrix multiplication, and outputs the encoded 7-bit message using even parity logic.

This project was created collaboratively as part of a C++ coursework project.

---

## Features

* Reads binary input from a file
* Implements a (7,4) Hamming Code encoder
* Generates parity bits using matrix multiplication
* Uses even parity error-detection logic
* Demonstrates practical use of linear algebra in C++
* Uses the Eigen matrix library for matrix operations

---

## Technologies Used

* C++
* Eigen Library
* File I/O
* Matrix Operations
* Error-Correcting Codes

---

## How It Works

The program:

1. Reads 4 binary data bits from an input file
2. Stores the bits in a data vector
3. Multiplies the vector by the generator matrix
4. Applies modulo-2 arithmetic to generate parity bits
5. Outputs the encoded 7-bit Hamming code

---

## Example Input

Input file contents:

```txt
1 0 1 1
```

Example output:

```txt
The data bits encode to:
1
0
1
0
1
1
0
```

---

## Project Structure

```txt
.
├── main.cpp
├── hamming.cpp
├── hamming.h
├── input.txt
└── README.md
```

---

## How to Compile

Make sure Eigen is installed on your system.

Example compile command:

```bash
g++ main.cpp hamming.cpp -o hamming
```

Run the program:

```bash
./hamming
```

---

## Concepts Demonstrated

* Hamming Codes
* Error Detection
* Binary Arithmetic
* Matrix Multiplication
* Linear Algebra Applications
* Object-Oriented Programming in C++
* File Handling

