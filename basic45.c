#include <stdio.h>

int main(void)
{
        double l = 1;
        double S = 0;

        while (l < 51) {
                S += 1/l;
                l++;
        }
        printf("%.2lf\n", S);
        return 0;
}
