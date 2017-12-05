#include <stdio.h>
#include <string.h>

int main(void)
{
        int max = 0;
        int k = 0;
        int vec[3] = {0, 0, 0};
        char ordnum[3][7];
        strcpy(ordnum[0], "first");
        strcpy(ordnum[1], "second");
        strcpy(ordnum[2], "third");
        for (k = 0; k < 3; k++) {
                printf("Input the %s integer: ", ordnum[k]);
                scanf("%d", &vec[k]);
        }
        max = vec[0];
        for (k = 1; k < 3; k++) {
                if ( max < vec[k]) {
                        max = vec[k];
                }
        }
        printf("Maximum value of three integers: %d\n", max);
        return 0;
}
