#include <stdio.h>
#include <float.h>
void readinput(double vec[2])
{
        char name[2][10] = {"x", "y"};
        int k = 0;
        for (k = 0; k < 2; k++) {
                printf("%s: ", name[k]);
                scanf("%lf", &vec[k]);
        }
        return;
}

int main(void)
{
        double x[2] = {0,0};
        readinput(x);

        if (0 == x[1]) {
                printf("Error! Division by zero!!!!\n");
        }
        else {
                printf("%lf\n", x[0]/x[1]);
        }
        return 0;
}
