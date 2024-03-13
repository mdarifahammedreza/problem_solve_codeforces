#include<stdio.h>
#include <stdbool.h>
int main(){
int n,k,l,c,d,p,nl,np;
int carry=0;
bool x=true;
scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

int nitDrinks = k*l;
int nitLemonSlices = c*d;


while(x!=false)
{
    nitDrinks = nitDrinks - n*nl;
    nitLemonSlices = nitLemonSlices -n*1;
    p = p-n*np;
    if(nitDrinks<0 || nitLemonSlices <0 || p<0 ) x= false;
    else carry++;

}

printf("%d\n",carry);



return 0;
}
