#include <stdio.h>

int main(void)
{
        int p = 0;
        int q = 0;
        int k = 1;
        int l = 1;
        int m = 1;

        printf("Input number of lines: ");
        scanf("%d", &p);
        printf("Number of characters in line: ");
        scanf("%d", &q);

        for (k = 1; k < p+1; k++) {
                for (l = 1; l < q+1; l++) {
                        printf("%d ", m);
                        m++;
                }
                printf("\n");
        }
        return 0;
}
