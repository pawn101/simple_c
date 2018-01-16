#include <stdio.h>
#include <limits.h>

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
        int max = INT_MIN;
        int k_max = 0;

        readinput(vec);
        for (k = 0; k < 5; k++) {
                if (vec[k] > max) {
                        max = vec[k];
                        k_max = k + 1;
                }
        }
        printf("Highest value: %d\n", max);
        printf("Position: %d\n", k_max);
        return 0;
}
