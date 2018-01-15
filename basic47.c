#include <stdio.h>

int main(void)
{
        int k = 1;
        int N = 1;

        printf("Input an integer: ");
        scanf("%d", &N);
        printf("All the divisors of %d are:\n", N);
        for (k = 1; k < N+1; k++) {
                if (0 == N % k) {
                        printf("%d\n", k);
                }
        }
        return 0;
}
