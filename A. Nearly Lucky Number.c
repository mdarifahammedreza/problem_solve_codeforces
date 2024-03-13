#include <stdio.h>

int main() {

int num;
long int digits;
int carry =0;
int count = 1;
scanf("%d", &num);
while (num != 0) {
    digits = num % 10;
    if(digits==4 || digits==7){
        carry ++;
    }
    num /= 10;
    count++;
}
if(carry==4 || carry ==7){
    printf("YES \n");
}
else
    printf("NO \n");
}
