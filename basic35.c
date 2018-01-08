#include <stdio.h>

void readinput(int vec[2])
{
        char name[2][10] = {"first", "second"};
        int k = 0;
        for (k = 0; k < 2; k++) {
                printf("Input the %s number: ", name[k]);
                scanf("%d", &vec[k]);
        }
        return;
}

int main(void)
{
        int vec[2] = {0,0};
        readinput(vec);

        if (vec[0] < vec[1]) {
                printf("The pair is in ascending order!\n");
        }
        else if (vec[0] > vec[1]) {
                printf("The pair is in descending order!\n");
        }
        else {
                printf("The two numbers are equal!\n");
        }
        return 0;
}
