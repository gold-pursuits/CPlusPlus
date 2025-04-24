// Pre-processor directive: includes standard input/output library for functions like printf and scanf
#include <stdio.h>

// Global declaration: a global variable 'x' is initialized with value 7
int x = 7;

// main function: the entry point of the program
int main() {
    
    // Local declaration: declares a local variable 'num' to store user input
    int num;

    // Screen output: prompts the user to enter a number
    printf("Enter value of n: ");

    // Reading keyboard input: takes an integer input from the user and stores it in 'num'
    scanf("%d", &num);

    // Screen output: prints the sum of global variable 'x' and user input 'num'
    printf("Sum of 7 and input value: %d\n", x + num);

    // return 0 is optional in older C versions, but should be added for clarity
    return 0;
}
