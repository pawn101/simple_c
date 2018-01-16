#include <stdio.h>

int main(void)
{
        int s;
        printf("Input the first element of the series: ");
        scanf("%d", &s);
        printf("%d\n%d\n%d\n%d\n%d\n", s, 3*s, 9*s, 27*s, 81*s);
        return 0;
}
