#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int sum_after_replacement(int n) {
    int current_sum = 0;
    for (int i = 1; i <= n; i++) {
        current_sum += sum_of_digits(i);
    }
    return current_sum;
}

int main() {
    int n;
    int test_case;
    scanf("%d",&test_case);
    for(int i=0;i<test_case;i++){
        scanf("%d", &n);

    int result = sum_after_replacement(n);
    printf("%d\n", result);
    }

    return 0;
}
