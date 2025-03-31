int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case
    } else if (n == 1) {
        return 1; // Base case
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

void fibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); // Call the recursive function for each term
    }
    printf("\n");
}
