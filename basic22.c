#include <stdio.h>

int main(void)
{
        int k = 0;
        int num[5];
        char name[5][7] = {"first", "second", "third", "fourth",
                "fifth"};
        int sum = 0;

        for (k = 0; k < 5; k++) {
                printf("Input the %s number: ", name[k]);
                scanf("%d", &num[k]);
                if ((num[k] % 2) != 0) {
                        sum += num[k];
                }
        }
        printf("Sum of all odd values: %d\n", sum);
        return 0;
}
