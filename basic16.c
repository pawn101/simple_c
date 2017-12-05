#include <stdio.h>

int main(void)
{
        int sum = 0;
        int note[7] = {100, 50, 20, 10, 5, 2, 1};
        int k = 0;
        int numbn = 0;
        printf("Input the amount: ");
        scanf("%d", &sum);
        for (k = 0; k < 7; k++) {
                numbn = sum / note[k];
                printf("%d Note(s) of %d\n", numbn, note[k]);
                sum = sum % note[k];
        }
        return 0;
}
