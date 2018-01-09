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
        if (x[0] > 0) {
                if (x[1] > 0) {
                        printf("Quadrant I (+,+)\n");
                }
                else if (x[1] < 0) {
                        printf("Quadrant II (+,-)\n");
                }
                else if (0 == x[1]) {
                        printf("On x axis\n");
                }
        }
        else if (x[0] < 0) {
                if (x[1] < 0) {
                        printf("Quadrant III (-,-)\n");
                }
                else if (x[1] > 0) {
                        printf("Quadrant IV (-,+)\n");
                }
                else if (0 == x[1]) {
                        printf("On x axis\n");
                }
        }
        else if ((0 == x[0]) && (0 == x[1])) {
                printf("Origin (0,0)\n");
        }
        else if (0 == x[0]) {
                printf("On y axis\n");
        }

        return 0;
}
