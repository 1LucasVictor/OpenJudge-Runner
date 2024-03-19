#include<stdio.h>

int main(){

int n,i,x=0;
scanf("%d",&n);


while(n>5){
    if(n>500){
        i=n/500;
        x+=(i*1000);
        n-=(i*500);

    }
    else if( n>5)
    {
        i=n/5;
        x+=(i*5);
        n-=(i*5);
    }




}


printf("%d",x);




}
