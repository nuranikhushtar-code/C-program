#include <stdio.h>

int main() {
    int a = 10, b = 5;
    
    // Arithmetic operators
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical operators
    printf("(a > 0 && b > 0): %d\n", a > 0 && b > 0);
    printf("(a > 0 || b < 0): %d\n", a > 0 || b < 0);
    printf("!(a == b): %d\n", !(a == b));

    // Bitwise operators
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("b << 1 = %d\n", b << 1);
    printf("b >> 1 = %d\n", b >> 1);

    // Assignment operators
    int c = a;
    c += b; printf("c += b: %d\n", c);
    c -= b; printf("c -= b: %d\n", c);
    c *= b; printf("c *= b: %d\n", c);
    c /= b; printf("c /= b: %d\n", c);
    c %= b; printf("c %%= b: %d\n", c);

    return 0;
}
