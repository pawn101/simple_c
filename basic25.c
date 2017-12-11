#include <stdio.h>

int main(void)
{
        int n = 1;
        char month[12][10] = {"January", "February", "March",
                "April", "May", "June", "July", "August", 
                "September", "October", "November", "December"};

        printf("Input a number between 1 to 12 ");
        printf("to get the month name: ");
        scanf("%d", &n);

        printf("%s\n", month[n-1]);
        return 0;
}
