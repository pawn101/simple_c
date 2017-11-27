#include <stdio.h>

int main(void)
{
        char id[10];
        int hrperday;
        float salperhr;

        printf("Input the Employee's ID (Max. 10 chars):");
        scanf("%s", id);
        printf("Input the working hours:");
        scanf("%d", &hrperday);
        printf("Salary amount/hr:");
        scanf("%f", &salperhr);
        
        printf("Employee's ID = %s\n", id);
        printf("Salary = USD %.2f\n", salperhr * hrperday * 21);
        return 0;
}
