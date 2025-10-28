#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\nBitwise Operations:\n");

    printf("\nBitwise AND (&)\n%d & %d = %d\n", a, b, a & b);
    printf("\nBitwise OR (|)\n%d | %d = %d\n", a, b, a | b);
    printf("\nBitwise XOR (^)\n%d ^ %d = %d\n", a, b, a ^ b);
    printf("\nLeft Shift (<<)\n%d << %d = %d\n", a, b, a << b);
    printf("\nRight Shift (>>)\n%d >> %d = %d\n", a, b, a >> b);

    return 0;
}

