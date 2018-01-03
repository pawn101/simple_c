#include <stdio.h>

int main(void)
{
        int num = 0;
        printf("Input an integer: ");
        scanf("%d", &num);

        if ( num > 0 ) {
                printf("Positive ");
        }
        else if ( num < 0 ) {
                printf("Negative ");
        }
        if ( 0 == num % 2 ) {
                printf("Even\n");
        }
        else {
                printf("Odd\n");
        }
        return 0;
}
