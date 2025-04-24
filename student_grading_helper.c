#include <stdio.h>

// 1. Create custom type names using typedef
typedef char letter;   // letter is now another name for char
typedef float real;    // real is now another name for float

// 2. Create constants
const real PI = 3.14159;      // Constant value of Pi
const int MAX_MARKS = 100;    // Max marks for any student

int main() {
    // 3. Variable declarations
    letter grade;       // character grade
    real marks;         // student marks
    int age;            // student age
    char name[20];      // student name (string)
    
    // 4. Print a welcome message using printf and \n
    printf("Welcome to the Student Grading Helper!\n\n");

    // 5. Get student name using scanf (string, no spaces)
    printf("Enter your first name: ");
    scanf("%s", name);  // no & for arrays (name is already an address)

    // 6. Get student age and marks
    printf("Enter your age and marks (e.g. 18 85.5): ");
    scanf("%d %f", &age, &marks);

    // 7. Display the input using formatted output
    printf("\n\tStudent Report\n");
    printf("------------------------\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Marks: %.2f out of %d\n", marks, MAX_MARKS);  // %.2f = 2 decimal places

    // 8. Decide grade based on marks using if-else
    if (marks >= 80) {
        grade = 'A';
    } else if (marks >= 60) {
        grade = 'B';
    } else if (marks >= 40) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    // 9. Print the grade using both printf and putchar
    printf("Grade (using printf): %c\n", grade);
    printf("Grade (using putchar): ");
    putchar(grade);    // prints only one character
    printf("\n");

    // 10. Using escape sequences
    printf("Reminder: Use \'%c\' for grade formatting.\n", grade);
    printf("Fun Fact: Value of PI is %f\n", PI);
    
    // 11. Demonstrate use of \0
    char endMessage[] = "Done!\0ExtraText"; // \0 ends the string
    printf("Message: %s\n", endMessage);    // Only "Done!" is printed

    // 12. getchar() example (waits for any key to close)
    printf("\nPress any key to exit...\n");
    getchar(); // clears newline from buffer
    getchar(); // waits for user key press

    return 0;
}
