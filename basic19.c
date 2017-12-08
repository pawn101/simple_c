#include <stdio.h>

int main(void)
{
        int p = 0;
        int q = 0;
        int r = 0;
        int s = 0;

        printf("Input the first integer: ");
        scanf("%d", &p);
        printf("Input the second integer: ");
        scanf("%d", &q);
        printf("Input the third integer: ");
        scanf("%d", &r);
        printf("Input the fourth integer: ");
        scanf("%d", &s);

        if ( (p % 2 == 0) && (r > 0) && (s > 0) && (q > r) && (s > p)
                        && ((r + s) > (p + q)) ) {
                printf("Correct values!\n");
        }
        else {
                printf("Wrong values!\n");
        }
        return 0;
}
