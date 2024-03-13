#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int array[n];


//input nth time
for(int i = 0;i<n;i++)
{
    scanf("%d",&array[i]);
}
for (int j=1;j<=n;j++){

    for (int x=0;x<n;x++){
        if(array[x]== j){
            printf("%d ",x+1);
        }
    }
}

}
