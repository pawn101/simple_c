#include <stdio.h>

int main(void)
{
        int y = 1329;
        printf("Years: %d\n", y/365);
        printf("Weeks: %d\n", (y%365)/7);
        printf("Days: %d\n", (y%365)%7);
        return 0;
}
