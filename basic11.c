#include <stdio.h>

int main(void)
{
        float n1;
        float n2;
        float w1;
        float w2;
        printf("Weight - Item1: ");
        scanf("%f", &w1);
        printf("No. of item1: ");
        scanf("%f", &n1);
        printf("Weight - Item2: ");
        scanf("%f", &w2);
        printf("No. of item2: ");
        scanf("%f", &n2);
        printf("Average Value = %f\n", (n1*w1 + n2*w2)/(n1 + n2));
        return 0;
}
