#include <stdio.h>
#include <math.h>

int main(void)
{
        double x1 = 0;
        double y1 = 0;
        double x2 = 0;
        double y2 = 0;
        double dist = 0;
        printf("Input x1: ");
        scanf("%lf", &x1);
        printf("Input y1: ");
        scanf("%lf", &y1);
        printf("Input x2: ");
        scanf("%lf", &x2);
        printf("Input y2: ");
        scanf("%lf", &y2);
        dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        printf("Distance between the said points: %.4lf\n", dist);
        return 0;
}
