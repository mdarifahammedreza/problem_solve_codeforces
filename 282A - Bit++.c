#include <stdio.h>
#include <string.h>

int main() {
    int x = 0, inputTime;
    char input[10];

    scanf("%d", &inputTime);
    getchar();
    for (int i = 0; i < inputTime; i++) {

         scanf("%[^\n]%*c", input);


        if (strcmp(input, "x++") == 0 ||  strcmp(input, "++x") == 0 ||strcmp(input, "X++") == 0 ||  strcmp(input, "++X") == 0) {

            x++;
        } else if (strcmp(input, "--x") == 0 || strcmp(input, "x--")==0 || strcmp(input, "--X") == 0 || strcmp(input, "X--") == 0) {
            x--;
        }
    }
printf("%d\n",x);
    return 0;
}
