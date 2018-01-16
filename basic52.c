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
        int min = INT_MAX;
        int k_min = 0;

        readinput(vec);
        for (k = 0; k < 5; k++) {
                if (vec[k] < min) {
                        min = vec[k];
                        k_min = k + 1;
                }
        }
        printf("Smallest value: %d\n", min);
        printf("Position: %d\n", k_min);
        return 0;
}
