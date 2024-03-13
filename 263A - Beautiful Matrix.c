#include <stdio.h>
int main(){

int matrix[5][5],carry[2];
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){

            scanf("%d",&matrix[i-1][j-1]);
            if(matrix[i-1][j-1]==1) {carry[0]=i;carry[1]=j;

}
}}
int swap_row,row;
if(carry[0]<3) row=3-carry[0];
else if(carry[0]>3) row=carry[0]-3;
else row=0;
int swap_col,col;
if(carry[1]<3) col=3-carry[1];
else if(carry[1]>3) col=carry[1]-3;
else col=0;

printf("%d\n",row+col);
return 0;

}
