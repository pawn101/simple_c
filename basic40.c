#include <stdio.h>

void readinput(int vec[2])
{
        char name[2][10] = {"first", "second"};
        int k = 0;
        for (k = 0; k < 2; k++) {
                printf("Input the %s integer: ", name[k]);
                scanf("%d", &vec[k]);
        }
        return;
}

int main(void)
{
        int k = 0;
        int vec[2] = {0,0};
        int sum = 0;
        int low = 0;
        int high = 0;

        readinput(vec);

        if (vec[1] < vec[0]) {
                low = vec[1];
                high = vec[0];
        }
        else {
                high = vec[1];
                low = vec[0];
        }

        k = low;
        while (k < high) {
                if ( (2 == k % 7) || (3 == k % 7)) {
                        printf("%d\n", k);
                }
                k++;
        }
        return 0;
}
