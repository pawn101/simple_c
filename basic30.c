#include <stdio.h>

int main(void)
{
        int k = 0;
        int limit = 0;
        printf("This program prints the squares of even numbers");
        printf(" from 2 to a limit.\nUpper limit: ");
        scanf("%d", &limit);
        
        for (k = 0; k < limit; k += 2) {
                printf("%d^2 = %d\n", k, k*k);
        }
        return 0;
}
