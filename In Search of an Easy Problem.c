#include <stdio.h>

int main() {
    int len, max=0;
    scanf("%d", &len);

    int array[len];
    for (int i = 0; i < len; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < len; i++) {
        if (array[i] == 1) {
            max = 1;
        }

    }
    if(max==1)printf("HARD\n");
    else printf("EASY\n");


    return 0;
}
