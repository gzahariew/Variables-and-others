#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    // Variables
    int x;      // declaration
    x = 30;     // initialization
    int y = 30; // declaration + initialization

    int c = 40;                         // integer, typically takes 4 bytes
    float gpa = 4.33;                   // Number with floating point
    char grade = 'C';                   // Character
    char myName[] = "This is a string"; // String (an array of char)

    char name[] = "George";
    int age = 18;

    printf("I am %d years old\n", age);          // %d for decimal (integer)
    printf("My name is %s\n", name);             // %s for string
    printf("Your average grade is %c\n", grade); // %c for character
    printf("Your GPA is %.2f\n", gpa);           // %f for float, %.2f for 2 decimal precision

    // Additional format specifiers
    // %c = character
    // %s = string (array of char)
    // %f = float
    // %lf = double
    // %d = integer

    // Precision and alignment
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Formatted with two decimal places: %.2f\n", item1);

    // Constants = fixed values that cannot be changed by the program during its execution
    const float pi = 3.14159;
    printf("Constant pi: %f\n", pi);

    // Arithmetic operators
    // + (addition), - (subtraction), * (multiplication), / (division), % (modulus)
    // ++ (increment), -- (decrement)

    int x2 = 5;
    int y2 = 2;

    int z = x2++; // assigns 5 to z, then increments x2 to 6

    // Augmented assignment operators, shortcuts for common operations
    x2 += 2; // equivalent to x2 = x2 + 2

    // User input example
    printf("How old are you? ");
    scanf("%d", &age);

    printf("You are %d years young\n", age);


    //Math function

    double A = sqrt(9); //3
    double B = pow(2, 4); //16
    int C = round(3.14); //3
    int D = ceil(3.14); //4
    int E = floor(3.99); //3
    double F = fabs(-100); //100
    double G = log(3); // 1.09
    double H = sin(45); //?


    return 0;
}
