#include <stdio.h>
int main(){
    int stops;
    int a,b,sum=0,k=0;
    scanf("%d",&stops);
    for (int i = 0; i < stops; i++)
    {
//done
    scanf("%d %d",&a,&b);
        sum= k+(a-b);
        if(sum>0)
            k=sum;
        else
            k=0;
    }
    printf("%d",sum);
}
