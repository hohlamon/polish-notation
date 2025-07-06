# Function Grapher

This project is a simple, command-line-based graphing calculator written in C. It takes a mathematical function as input, converts it to Reverse Polish Notation (RPN), and then renders a graph of the function in the terminal.

-----

## Features

  - **Infix to RPN Conversion**: Transforms standard mathematical expressions into Reverse Polish Notation using a stack-based algorithm. This makes the expression easier to evaluate programmatically.
  - **Mathematical Evaluation**: Calculates the value of the function for different values of `x`. It supports `+`, `-`, `*`, `/`, `^`, `sin`, and `cos`.
  - **Terminal-Based Graphing**: Visualizes the function on a 2D grid in the terminal, plotting points that satisfy the equation.

-----

## How It Works

1.  **Input**: The program takes a single mathematical expression as a string argument.
2.  **Parsing**: The input string is parsed and converted from infix notation (e.g., `2*sin(x)`) to Reverse Polish Notation (e.g., `2 x sin *`).
3.  **Calculation & Plotting**: The program iterates through `x` values from 0 to 4π. For each `x`, it calculates the corresponding `y` value by evaluating the RPN expression. The results are then mapped to a 25x80 character grid.
4.  **Output**: The resulting graph is printed to the standard output.

-----

## How to Build and Run

### Prerequisites

  - A C compiler (like GCC)
  - `make`

### Build

To compile the project, just run the `make` command:

```shell
make
```

This will create an executable file in the `../build/` directory.

### Run

To plot a function, run the executable with the function as an argument. For example:

```shell
../build/main "2*sin(x)"
```

### Clean Up

To remove the compiled object files and the executable, run:

```shell
make clean
```
