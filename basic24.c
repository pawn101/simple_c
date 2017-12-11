#include <stdio.h>

int main(void)
{
        int a = 0;
        int b = 0;

        printf("Input the first number: ");
        scanf("%d", &a);
        printf("Input the second number: ");
        scanf("%d", &b);

        if ((0 == a % b) || (0 == b % a)) {
                printf("Multiplied!\n");
        }
        else {
                printf("Not multiplied!\n");
        }
        return 0;
}
