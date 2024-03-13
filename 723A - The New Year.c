#include <stdio.h>
int main(){

int x1,x2,x3;
scanf("%d %d %d",&x1,&x2,&x3);
int high,mid,small;

if(x1>x2 && x1>x3) {
        high =x1;
    if(x2>x3) { mid =x2; small =x3; }
    else {mid=x3; small = x2;}
}
else if(x2>x1 && x2>x3)
        { high =x2;

            if(x1>x3) {mid=x1; small = x3 ;}
            else {mid =x3; small = x1  ; }}
else if(x3>x2 && x3>x1){
    high =x3;
    if(x2>x1) {mid=x2;small =x1;}
    else {mid = x1; small= x2;}
}

int minDistance = (high -mid) + (mid- small);

printf("%d\n",minDistance);
}

