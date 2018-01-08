#include <stdio.h>
#include <string.h>

int main(void)
{
        int k = 0;
        char pw[6] = "1234\n";
        char user_pw[6];

        while (0 == k) {
                printf("Input the password: ");
                fgets(user_pw, sizeof(user_pw), stdin);
                if (0 == strcmp(pw, user_pw)) {
                        printf("Correct password!\n");
                        k = 1;
                }
                else {
                        printf("Incorrect password!\n");
                }
        }
        return 0;
}
