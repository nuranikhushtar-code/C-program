#include <stdio.h>
#include <string.h>

// Struct for demonstrating -> and .
struct Point {
    int x;
    int y;
};

int main() {
    // Arithmetic Operators
    int a = 10, b = 3;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b); // %% to print %

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators
    printf("\nLogical Operators:\n");
    int x = 1, y = 0;
    printf("x && y: %d\n", x && y);
    printf("x || y: %d\n", x || y);
    printf("!x: %d\n", !x);

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    // Assignment Operators
    printf("\nAssignment Operators:\n");
    int c = 5;
    printf("Initial c = %d\n", c);
    c += 2; printf("c += 2: %d\n", c);
    c -= 1; printf("c -= 1: %d\n", c);
    c *= 3; printf("c *= 3: %d\n", c);
    c /= 2; printf("c /= 2: %d\n", c);
    c %= 2; printf("c %%= 2: %d\n", c);

    // Unary Operators
    printf("\nUnary Operators:\n");
    int d = 5;
    printf("d = %d\n", d);
    printf("++d = %d\n", ++d); // pre-increment
    printf("d++ = %d\n", d++); // post-increment
    printf("--d = %d\n", --d); // pre-decrement
    printf("d-- = %d\n", d--); // post-decrement
    printf("Final d = %d\n", d);
    printf("Sizeof d = %lu\n", sizeof(d));

    // Ternary Operator
    printf("\nTernary Operator:\n");
    int max = (a > b) ? a : b;
    printf("Max of %d and %d is %d\n", a, b, max);

    // Comma Operator
    printf("\nComma Operator:\n");
    int result;
    result = (x = 2, y = 3, x + y); // last value is the result
    printf("Result of comma expression: %d\n", result);

    // Pointer Operators (* and &)
    printf("\nPointer Operators:\n");
    int num = 100;
    int *ptr = &num;
    printf("Address of num: %p\n", (void *)&num);
    printf("Using pointer, value = %d\n", *ptr);

    // Structure Operators (. and ->)
    printf("\nStructure Operators:\n");
    struct Point p1 = {10, 20};
    struct Point *pPtr = &p1;
    printf("Using . : p1.x = %d, p1.y = %d\n", p1.x, p1.y);
    printf("Using -> : pPtr->x = %d, pPtr->y = %d\n", pPtr->x, pPtr->y);

    // Array and Function Call Operators
    printf("\nArray and Function Call Operators:\n");
    int arr[] = {1, 2, 3};
    printf("arr[0] = %d\n", arr[0]); // [] operator
    printf("Function call operator: printf(\"Hello\")\n"); // () operator

    return 0;
}
