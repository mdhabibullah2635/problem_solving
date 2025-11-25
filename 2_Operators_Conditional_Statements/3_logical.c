#include <stdio.h>

int main()
{
    // Logical Operators
    // (&&, ||, !)

    int x = 10, y = 20;

    printf("x < y && x > 5  : %d\n", (x < y && x > 5));   // 1 (true)
    printf("x > y || x == 10: %d\n", (x > y || x == 10)); // 1 (true)
    printf("!(x == y)       : %d\n", !(x == y));          // 1 (true)

    return 0;
}
