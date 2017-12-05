#include <stdio.h>

int main(void)
{
        int dist = 0;
        float cons = 1.0;
        printf("Input total distance in km: ");
        scanf("%d", &dist);
        printf("Input total fuel spent in liters: ");
        scanf("%f", &cons);
        printf("Average consumption (km/lt) %.2f\n", dist/cons);
        return 0;
}
