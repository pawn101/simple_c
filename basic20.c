#include <stdio.h>
#include <math.h>

int main(void)
{
        double a = 0;
        double b = 0;
        double c = 0;
        double D = 0;
        double sol1 = 0;
        double sol2 = 0;

        printf("Input the first number (a): ");
        scanf("%lf", &a);
        printf("Input the second number (b): ");
        scanf("%lf", &b);
        printf("Input the third number (c): ");
        scanf("%lf", &c);

        D = b*b - 4*a*c;
        if( D < 0 ) {
                printf("No real roots!\n");
        }
        else if ( D > 0 ) {
                sol1 = (-b + sqrt(D))/(2*a);
                sol2 = (-b - sqrt(D))/(2*a);
                printf("Root1 = %.5lf\n", sol1);
                printf("Root2 = %.5lf\n", sol2);
        }
        else {
                sol1 = -b / (2*a);
                printf("Double root = %.5lf\n", sol1);
        }
        return 0;
}
