#include <stdio.h>

void readinput(int vec[5])
{
        char name[5][10] = {"first", "second", "third", "fourth",
                "fifth"};
        int k = 0;
        for (k = 0; k < 5; k++) {
                printf("Input the %s number: ", name[k]);
                scanf("%d", &vec[k]);
        }
        return;
}

int main(void)
{
        int k = 0;
        int vec[5] = {0,0,0,0,0};
        int sum = 0;

        readinput(vec);
        for (k = 0; k < 5; k++) {
                if (vec[k] % 2 == 1) {
                        sum += vec[k];
                }
        }
        printf("Sum of all odd values: %d\n", sum);
        return 0;
}
