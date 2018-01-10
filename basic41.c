#include <stdio.h>

int main(void)
{
        int k = 0;
        int N = 0;

        printf("Input number of lines: ");
        scanf("%d", &N);

        for (k = 0; k < N; k++) {
                printf("%d %d %d\n", 3*k+1, 3*k+2, 3*k+3);
        }
        return 0;
}
