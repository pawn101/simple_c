#include <stdio.h>

int main(void)
{
        int k = 0;
        int input = 0;
        int datevec[3] = {3600, 60, 1};
        int numdate = 0;

        printf("Input seconds: ");
        scanf("%d", &input);

        printf("There are:\nH:M:S - ");
        for(k = 0; k < 3; k++) {
                if (k != 0) {
                        printf(":");
                }
                numdate = input / datevec[k];
                printf("%d", numdate); 
                input = input % datevec[k];
        }
        printf("\n");
        return 0;
}
