#include <stdio.h>

int main(void)
{
        int k = 0;
        int input = 0;
        int datevec[3] = {365, 30, 1};
        int numdate = 0;
        char stringvec[3][10] = {"Year(s)", "Month(s)", "Day(s)"};

        printf("Input no. of days: ");
        scanf("%d", &input);

        for(k = 0; k < 3; k++) {
                numdate = input / datevec[k];
                printf("%d %s\n", numdate, stringvec[k]);
                input = input % datevec[k];
        }
        return 0;
}
