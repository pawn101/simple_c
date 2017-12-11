#include <stdio.h>

int main(void)
{
        double a = 0;
        double b = 0;
        double c = 0;

        printf("Input the first number: ");
        scanf("%lf", &a);
        printf("Input the second number: ");
        scanf("%lf", &b);
        printf("Input the third number: ");
        scanf("%lf", &c);

        if( (a > 0) && (b > 0) && (c > 0) && (a + b > c) && 
                        (a + c > b) && (b + c > a) ) {
                printf("Perimeter = %lf\n", a + b + c);
        }
        else {
                printf("Impossible to create triangle!\n");
        }
        return 0;
}
