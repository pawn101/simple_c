#include <stdio.h>

int main(void)
{
        int k = 0;
        int N = 0;

        printf("Input number of lines: ");
        scanf("%d", &N);

        for (k = 1; k < N + 1; k++) {
                printf("%d %d %d\n", k, k*k, k*k*k);
        }
        return 0;
}
