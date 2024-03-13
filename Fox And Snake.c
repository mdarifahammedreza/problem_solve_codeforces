
#include<stdio.h>
int main(){

int n,m,carry=0,p;
scanf("%d %d",&n,&m);


for(int i =0; i<n;i++){


    for(int j =0;j<m;j++){

        if(i%2==0) {printf("#");p=0;}        else {

            if(carry%2!=0) {
                if(j==0)printf("#");
                else printf(".");
            }
            else {
                if(j== m-1)printf("#");
                else printf(".");
            }

p=1;
        }
    }
carry+=p;
printf("\n");
}
return 0;
}
