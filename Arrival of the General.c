#include <stdio.h>

int main() {
    int len, max = 0, min = 0;
    scanf("%d", &len);

    int array[len];
    for (int i = 0; i < len; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < len; i++) {
        if (array[i] >= array[max]) {
            max = i;
        }
        if (array[i] <= array[min]) {
            min = i;
        }
    }

    if (max > min) {
        min++;
    }

    printf("%d\n", max + (len - 1) - min);

    return 0;
}
