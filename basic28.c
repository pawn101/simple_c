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
        int posnum = 0;
        int sum = 0;
        double avg = 0.0;

        readinput(vec);
        for (k = 0; k < 5; k++) {
                if (vec[k] > 0) {
                        posnum++;
                        sum += vec[k];
                }
        }
        printf("Number of positive numbers: %d\n", posnum);
        if (0 != posnum) {
                avg = sum / posnum;
                printf("Average value of the said ");
                printf("positive numbers: %.2lf\n", avg);
        }
        return 0;
}
