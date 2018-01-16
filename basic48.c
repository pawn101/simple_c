#include <stdio.h>

void readinput(int vec[5])
{
        int k = 0;
        char ordin[5][10] = {"first", "second", "third", "fourth",
                "fifth"};
        for (k = 0; k < 5; k++) {
                printf("Input the %s number: ", ordin[k]);
                scanf("%d", &vec[k]);
        }
        return;
}

int main(void)
{
        int k = 0;
        int vec[5] = {0,0,0,0,0};
        readinput(vec);
        for (k = 0; k < 5; k++) {
                printf("n[%d] = ", k);
                if (vec[k] <= 0) {
                        printf("100\n");
                }
                else {
                        printf("%d\n", vec[k]);
                }
        }
        return 0;
}
