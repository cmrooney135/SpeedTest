# Speed Test


This program bubble sorts the same sets of unordered numbers in both Python and C++, it also times how long it takes each programming language to sort, and graph the results.

note: Since Python is interpreted and C++ is compiled, the only fair way to compare times is to include the C++ compile time in its runtime. Therefore, we will start the program in Python and Python will call C++. 

The Python file named `BubbleSort.py` includes the main program, which can be broken into three parts:
1. Run the bubble sort algorithm in Python and time how long it takes to sort.
1. Compile and run the C++ bubble sort algorithm and time how long it takes to sort.
1. Graph the runtimes.

## Code included
* `numbers.txt`: a text file with a list of 10,000 random integers (taken from random.org). These will be read into the Python and C++ programs to sort.
* `BubbleSort.cpp`: a C++ source file that takes a command line argument for the number of integers to sort. Reads in that many integers from the file, sorts the numbers, and prints out the first and last ten integers from the sorted list to demonstrate that it worked properly.
* `BubbleSort.py`: a Python source file that includes the main program, which can be broken into three parts:
1. Runs the bubble sort algorithm in Python and times how long it takes to sort.
1. Compiles and runs the C++ bubble sort algorithm and times how long it takes to sort.
1. Graphs the runtimes in a bar graph using matplotlib.

Your goal is to run the Python file using the Command Line Interface (CLI), which should produce the graph and save it as a file named `BattleOfTheBubbleSorts.png`.

Can you guess which language will be faster at sorting, Python or C++?

## Running the C++ file

To run `BubbleSort.cpp` from your CLI, use the following commands:
* `g++ -std=c++1y BubbleSort.cpp` will compile the program into an executable file.
    * On Windows and get an error that g++ is an unrecognized command? Make sure you update your PATH variable (see [Unrecognized-Commands](https://github.com/uvmcs2300f2023/Unrecognized-Commands) repo for directions).
* To run the executable and give it a command line argument of 10:
    * For Windows users, the command is `a.exe 10`
    * For Mac/Linux users, the command is `./a.out 10`

This should print "Looking for size: 10" when you run it. It will do more once you complete the TODO statements.
