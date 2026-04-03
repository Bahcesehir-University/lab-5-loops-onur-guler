// ============================================================================
//  LAB: Loops in C++ (while, for, do-while)
//  Course: CMP1001 - Introduction to Programming (C++)
//  Duration: 60 minutes
//
//  Description:
//    In this lab you will practice the three loop structures in C++:
//    while, for, and do-while. You will start with simple counting
//    and progress to real-world problems that require iteration.
//
//  Instructions:
//    1. Read each section carefully before writing code.
//    2. Look for "// TODO:" markers — that is where you write your code.
//    3. Compile often! Fix errors as you go.
//    4. Test each exercise before moving to the next one.
//    5. The Challenge section is optional but recommended.
//
//  How to compile:
//    g++ MainProgram.cpp -o lab
//    ./lab
// ============================================================================

#include <iostream>
using namespace std;

typedef enum menu_choice_e {
    MENU_EXIT = 0,
    MENU_SUM = 1,
    MENU_MULTIPLY = 2,
    MENU_EVEN_ODD = 3
} menu_choice_t;

int main() {

    // ========================================================================
    //  SECTION 1 — WARM-UP (5-10 minutes)
    //  Goal: Recall basic I/O and variables before we dive into loops.
    // ========================================================================

    cout << "===== SECTION 1: WARM-UP =====" << endl;

    // Exercise 1.1
    // Ask the user for their name and greet them.
    // Example output: "Hello, Ali! Welcome to the Loops Lab."

    // TODO: Declare a string variable for the name
    std::string name;
    // TODO: Prompt the user and read the name with cin
    std::cout << "Please enter your name: ";
    std::cin >> name;
    // TODO: Print the greeting
    std::cout << "Hello, " << name << "! Welcome to the Loops Lab.\n";

    cout << endl;

    // Exercise 1.2
    // Ask the user for two integers and print their sum and product.
    // Example: If user enters 4 and 7, print:
    //   Sum: 11
    //   Product: 28

    // TODO: Declare two int variables
    int a, b;
    // TODO: Prompt and read both integers
    std::cout << "Enter 2 integers: ";
    std::cin >> a >> b;
    // TODO: Print the sum and product
    std::cout << "Sum : " << a + b;
    std::cout << "Product : " << a * b;

    cout << endl;

    // ========================================================================
    //  SECTION 2 — CORE CONCEPTS (10-15 minutes)
    //  Goal: Understand the syntax of while, for, and do-while.
    // ========================================================================

    cout << "===== SECTION 2: CORE CONCEPTS =====" << endl;

    // --- 2A: The WHILE loop ---
    // Syntax:
    //   while (condition) {
    //       // body — runs as long as condition is true
    //   }
    //
    // Example: Print numbers 1 to 5
    //   int i = 1;
    //   while (i <= 5) {
    //       cout << i << " ";
    //       i++;
    //   }

    // Exercise 2.1
    // Using a WHILE loop, print all EVEN numbers from 2 to 20.
    // Expected output: 2 4 6 8 10 12 14 16 18 20

    cout << "Even numbers (while): ";
    // TODO: Write a while loop that prints even numbers from 2 to 20
    int i = 2;
    while (i <= 20) {
        std::cout << i << " ";
        i += 2;
    }
    std::cout << std::endl;

    cout << endl;

    // --- 2B: The FOR loop ---
    // Syntax:
    //   for (initialization; condition; update) {
    //       // body
    //   }
    //
    // Example: Print numbers 1 to 5
    //   for (int i = 1; i <= 5; i++) {
    //       cout << i << " ";
    //   }

    // Exercise 2.2
    // Using a FOR loop, print all ODD numbers from 1 to 15.
    // Expected output: 1 3 5 7 9 11 13 15

    cout << "Odd numbers (for): ";
    // TODO: Write a for loop that prints odd numbers from 1 to 15
    for (int i = 1; i <= 15; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    cout << endl;

    // --- 2C: The DO-WHILE loop ---
    // Syntax:
    //   do {
    //       // body — always runs at least once
    //   } while (condition);
    //
    // Key difference: The body executes BEFORE the condition is checked.
    //
    // Example: Ask user for a positive number (keep asking until valid)
    //   int num;
    //   do {
    //       cout << "Enter a positive number: ";
    //       cin >> num;
    //   } while (num <= 0);

    // Exercise 2.3
    // Using a DO-WHILE loop, ask the user to enter a number between
    // 1 and 10 (inclusive). Keep asking until they enter a valid number.
    // Then print: "You entered: X"

    // TODO: Declare an int variable
    int x = -1;
    // TODO: Write a do-while loop that validates input (1-10)
    do {
        std::cout << "Enter a value [1, 10]: ";
        std::cin >> x;
    } while (x > 10 || x < 0);
    // TODO: Print the valid number
    std::cout << "Number " << x << " is a valid number in [1, 10]\n";

    cout << endl;

    // ========================================================================
    //  SECTION 3 — GUIDED EXERCISES (25-30 minutes)
    //  Goal: Solve problems using loops with increasing difficulty.
    // ========================================================================

    cout << "===== SECTION 3: GUIDED EXERCISES =====" << endl;

    // Exercise 3.1 — Countdown Timer
    // Ask the user for a starting number (e.g., 10).
    // Print a countdown from that number to 1, then print "Liftoff!"
    // Example for input 5:
    //   5... 4... 3... 2... 1... Liftoff!

    cout << "-- Exercise 3.1: Countdown --" << endl;
    // TODO: Ask user for a starting number
    int countdown;
    do {
        std::cout << "Enter a value for the countdown (more than 0): ";
        std::cin >> countdown;
    } while (countdown <= 0);
    // TODO: Use a loop to count down to 1, printing each number followed by "... "
    while (countdown) {
        std::cout << countdown << "... ";
        countdown--;
    }
    // TODO: After the loop, print "Liftoff!"
    std::cout << "Liftoff!\n";

    cout << endl;

    // Exercise 3.2 — Sum Calculator
    // Ask the user how many numbers they want to add.
    // Then read that many numbers one by one and print the total sum.
    // Example:
    //   How many numbers? 3
    //   Enter number 1: 10
    //   Enter number 2: 20
    //   Enter number 3: 5
    //   Total sum: 35

    cout << "-- Exercise 3.2: Sum Calculator --" << endl;
    int num_count, tmp, sum = 0;
    // TODO: Ask how many numbers
    do {
        std::cout << "How many numbers? ";
        std::cin >> num_count;
    } while (num_count <= 0);
    // TODO: Use a for loop to read each number and accumulate the sum
    for (int i = 1; i <= num_count; i++) {
        std::cout << "Enter number " << i << ": ";
        std::cin >> tmp;
        sum += tmp;
    }
    std::cout << "Total sum : " << sum;
    // TODO: Print the total sum

    cout << endl;

    // Exercise 3.3 — Multiplication Table
    // Ask the user for a number N.
    // Print the multiplication table for N from 1 to 10.
    // Example for N = 7:
    //   7 x 1 = 7
    //   7 x 2 = 14
    //   ...
    //   7 x 10 = 70

    cout << "-- Exercise 3.3: Multiplication Table --" << endl;
    // TODO: Ask for N
    int n;
    std::cout << "Enter a number to see a multiplication table from 1 to 10: ";
    std::cin >> n;
    // TODO: Use a for loop from 1 to 10
    // TODO: Print each line: N x i = N*i
    for (int i = 1; i <= 10; i++) {
        std::cout << n << " x " << i << " = " << n * i << "\n";
    }

    cout << endl;

    // Exercise 3.4 — Factorial Calculator
    // Ask the user for a non-negative integer N.
    // Calculate N! (N factorial) using a loop.
    // Reminder: 0! = 1, 5! = 5 * 4 * 3 * 2 * 1 = 120
    //
    // Print: "N! = result"

    cout << "-- Exercise 3.4: Factorial --" << endl;
    // TODO: Ask for N (non-negative integer)
    int factorial, factorial_res = 1;
    do {
        std::cout << "Enter a non-negative integer for factorial calculation: ";
        std::cin >> factorial;
    } while (factorial < 0);
    // TODO: Use a loop to calculate the factorial
    //       Hint: start with result = 1, multiply by each number from 1 to N
    for (int i = 1; i <= factorial; i++) {
        factorial_res *= i;
    }

    // TODO: Print the result
    std::cout << factorial << "! = " << factorial_res << "\n";

    cout << endl;

    // Exercise 3.5 — Number Guessing (Sentinel Loop)
    // Generate a "secret" number (just hardcode it, e.g., 42).
    // Let the user guess until they get it right.
    // After each wrong guess, tell them "Too high!" or "Too low!"
    // When correct, print "Correct! You guessed it in X tries."
    //
    // Use a while or do-while loop.

    cout << "-- Exercise 3.5: Number Guessing --" << endl;
    int secret = 42;
    // TODO: Declare variables for the guess and a try counter
    // TODO: Loop until the guess equals the secret
    //       - Read the user's guess
    //       - Increment the counter
    //       - Print "Too high!" or "Too low!" if wrong
    // TODO: Print "Correct! You guessed it in X tries."
    int guess = secret, counter = 0;
    do {
        /* Enters this if only for the first time */
        if (guess == secret) std::cout << "Enter a number to guess\n";
        else if (guess < secret) std::cout << "Too low!\n";
        else if (guess > secret) std::cout << "Too high!\n";
        std::cin >> guess;
        counter++;
    } while (guess != secret);
    std::cout << "Correct! You guessed it in " << counter << " tries.";

    cout << endl;

    // Exercise 3.6 — Pattern Printer (Nested Loops)
    // Ask the user for a number of rows N.
    // Print a right triangle of stars:
    //
    // Example for N = 5:
    // *
    // **
    // ***
    // ****
    // *****
    //
    // Hint: You need a loop inside a loop (nested for loops).

    cout << "-- Exercise 3.6: Star Pattern --" << endl;
    // TODO: Ask for the number of rows
    // TODO: Outer loop for each row (1 to N)
    //       TODO: Inner loop to print the correct number of '*' characters
    //       TODO: Print a newline after each row
    int row_count;
    do {
        std::cout << "Enter a row count for the pattern printer: ";
        std::cin >> row_count;
    } while (row_count <= 0);

    for (int i = 0; i <= row_count; i++) {
        for (int j = 0; j < i; j++) std::cout << "*";
        std::cout << "\n";
    }

    cout << endl;

    // ========================================================================
    //  SECTION 4 — CHALLENGE (10 minutes)
    //  Goal: Apply your loop skills to harder, more open-ended problems.
    // ========================================================================

    cout << "===== SECTION 4: CHALLENGE =====" << endl;

    // Challenge 4.1 — Digit Counter
    // Ask the user for a positive integer.
    // Count how many digits it has WITHOUT converting to a string.
    // Hint: Repeatedly divide by 10 until you reach 0.
    //
    // Example: 48153 → 5 digits
    //          7     → 1 digit

    cout << "-- Challenge 4.1: Digit Counter --" << endl;
    // TODO: Ask for a positive integer
    int integer, digit_count = 0;
    do {
        std::cout << "Enter a positive integer for digit counting: ";
        std::cin >> integer;
    } while (integer <= 0);
    // TODO: Use a while loop to count digits
    while (integer) {
        integer /= 10;
        digit_count++;
    }
    // TODO: Print the digit count
    std::cout << "Digit count " << digit_count << "\n";

    cout << endl;

    // Challenge 4.2 — Simple Menu System
    // Create a menu-driven mini-program using a do-while loop:
    //
    //   === MINI CALCULATOR ===
    //   1. Add two numbers
    //   2. Multiply two numbers
    //   3. Check if a number is even or odd
    //   0. Exit
    //   Choice:
    //
    // The program should:
    //   - Display the menu
    //   - Read the user's choice
    //   - Perform the selected operation (ask for input as needed)
    //   - Repeat until the user chooses 0
    //
    // This is a common real-world pattern for console applications.

    cout << "-- Challenge 4.2: Mini Calculator --" << endl;
    // TODO: Declare a variable for the menu choice
    bool running = true;
    int choice; /* I don't want to overload the operator for a simple enum this is normally a menu_choice_t */
    // TODO: Write a do-while loop that:
    //       - Prints the menu
    //       - Reads the choice
    //       - Uses if/else or switch to handle each option
    //       - Loops back unless choice == 0
    // TODO: Print "Goodbye!" when exiting
    while (running) {
            std::cout <<
R"(=== MINI CALCULATOR ===
1. Add two numbers
2. Multiply two numbers
3. Check if a number is even or odd
0. Exit
Choice:)";
        std::cin >> choice;
        switch (choice) {
        case MENU_EXIT: {
            running = false;
        } break;
        case MENU_SUM: {
            int a, b;
            std::cout << "Enter 2 values to sum: ";
            std::cin >> a >> b;
            std::cout << a << " + " << b << " = " << a + b << "\n";
        } break;
        case MENU_MULTIPLY: {
            int a, b;
            std::cout << "Enter 2 values to multiply: ";
            std::cin >> a >> b;
            std::cout << a << " x " << b << " = " << a * b << "\n";
        } break;
        case MENU_EVEN_ODD: {
            int var;
            std::cout << "Enter a value to see even or odd: ";
            std::cin >> var;
            std::cout << (var % 2 ?  "Odd" : "Even") << "\n";
        } break;
        default:
            std::cout << "Unknown choice\n";
        }
    }

    cout << endl;

    // ========================================================================
    cout << "===== LAB COMPLETE =====" << endl;
    cout << "Great job! Don't forget to save and submit your work." << endl;
    // ========================================================================

    return 0;
}
