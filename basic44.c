#include <stdio.h>

int main(void)
{
        int k = -1;
        int input = 1;
        double sum = 0;

        printf("Input Mathematics marks (0 to terminate): ");
        while (input > 0) {
                scanf("%d", &input);
                sum += input;
                k++;
        }

        sum /= k;
        printf("Average marks in Mathematics: %lf\n", sum);
        return 0;
}
