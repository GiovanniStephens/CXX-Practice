# C-Practice

- [x] A basic print line function
- [x] Data structures:
    - [x] Lists/arrays
    - [x] vectors
    - [x] Dictionaries
- [ ] Data structures from scratch:
    - [x] Queues
    - [x] Stacks
    - [x] Single linked lists
    - [x] Double linked lists
    - [x] Trees (Binary search tree BST)
    - [x] Graphs
        - [x] Fully connected graphs
        - [x] Directed graphs
        - [x] Undirected graphs 
    - [x] Heaps (created in the heap sort, but I might re-implement it to remember.)
    - [ ] Hash tables
- [ ] Algorithms:
    - [ ] Sorting
        - [x] Bubble sort
        - [x] Insertion sort
        - [x] Selection sort
        - [x] Merge sort
        - [x] Quick sort
        - [x] Heap sort
        - [x] Bucket sort
        - [x] Count sort
        - [ ] Radix sort
    - [ ] Searching
        - [x] Linear search
        - [ ] Binary search
        - [ ] Jump search
        - [ ] Interpolation search
    - [ ] Greedy
    - [ ] Dynamic programming
    - [ ] Backtracking
    - [x] Recursion
- [x] String operations
    - [x] string objects
    - [x] reversing a string
    - [x] string concatenation
    - [x] string formatting
    - [x] string methods
- [x] Basic file operations
    - [x] reading a file
    - [x] writing a file
    - [x] appending to a file
    - [x] reading a file line by line
    - [x] reading a file line by line and printing
- [ ] More file operations
    - [x] Parsing .csv files
    - [ ] Parsing .json files
- [ ] Pointers
    - [ ] pointers to functions
    - [x] pointers to objects
    - [x] pointers to strings
    - [ ] pointers to dictionaries
    - [x] pointers to lists
    - [x] pointers to vectors
- [ ] Multiprocessing
    - [ ] Creating threads
    - [ ] Creating processes
    - [ ] Work out what else I can learn in this domain
- [x] Stucts
- [x] Basic random numbers
- [x] Roman numeral converter
- [x] String to int converter
- [ ] Unit tests
- [x] Automated code formatting
- [ ] Automated linting
- [ ] Word2Vec implementation
    - [x] Basic string tokenizer
    - [ ] Feed-forward neural network
    - [ ] Word2Vec model
- [x] Declaring functions
- [x] Sum of two numbers matching a target
- [x] Three-sum problem
- [x] Wordle solver
- [x] Improve the Wordle Solver:
    - [x] Function to get the next best guess based on current information.
    - [x] Update the solver so that it can take in new words to guess without reloading the data.
    - [x] Save down a shorter word list for a faster import.
    - [x] Should tell you if it did not manage to solve within 6 guesses. (says the number of guesses it took).
    - [x] Tidy the code and comment everything well.
    - [x] Add some error handling for the reading operations.
    - [x] See that there are no further obvious speed optimisations that could be done.
(Won't do)
- [x] Division in C++
- [ ] Statistical models
    - [x] Linear regression using OLS:
        - [x] matrix operations:
            - [x] matrix inversion (could this be parallelised?)
            - [x] matrix multiplication
            - [x] matrix transposition
        - [ ] Multiple linear regression:
            - [x] Benchmark the multiple linear regression using OLS with various matrix inversion and mutiplication functions. (I need to work out where I can speed up my OLS implementation).
            - [ ] Compare the multiple linear regression using OLS as opposed to using gradient descent.
    - [ ] Logistic regression using OLS
    - [x] Linear regression estimated using a minimizing/maximization approach
    - [x] Multiple Linear Regression
    - [x] Hypothesis testing
    - [x] AR Model (OLS)
    - [ ] MA Models (Hannan-Rissanen)
    - [ ] ARMA Models:
        - [ ] Checking for stationarity
        - [ ] Check for homoskedasticity
        - [x] Estimating the AR parameter using OLS
        - [ ] Estimating the MA parameter using Hannan-Rissanen procedure
            - [x] Fit an AR model to the data
            - [ ] Extract the residuals
            - [ ] Fit the ARMA model using the above residuals and lagged data using OLS
    - [ ] ARIMA Models
    - [ ] Auto-arima model
    - [ ] Auto-arima model with seasonal component
    - [ ] GARCH Model
    - [ ] ARMA-GARCH model
- [ ] Machine learning algorithms:
    - [x] K-means clustering:
        - [x] optimise the algorithm
        - [x] implement a class. It should be able to:
            - [x] Fit the data
            - [x] Return the centroids
            - [x] Return the cluster assignments
            - [x] Show the model inerti
        - [x] Implement k-means++
    - [ ] Evolutionary algorithms
    - [ ] Neural networks
    - [ ] Support vector machines
    - [ ] Decision trees
    - [ ] Random forests
    - [ ] Naive Bayes
- [ ] Finance
    - [ ] Download time series data from Yahoo Finance.
    - [ ] Download time series data from Quandl.
    - [ ] Find some tick data and import it.
- [ ] Performance testing:
    - [x] Timing functions
    - [ ] Benchmarking
    

# Questions
1. What happens when you instantiate a class instance with a parameter that is greater than the MAX_SIZE defined in the class?
2. What Libraries are popular in C++?

# Popular Libraries Research
- Linear algebra libraries:
    - Armadillo,
    - Blaze,
    - Eigen
- [Nice list](https://github.com/fffaraz/awesome-cpp)
