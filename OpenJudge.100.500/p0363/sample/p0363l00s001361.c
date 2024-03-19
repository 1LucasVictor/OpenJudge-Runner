#include<stdio.h>

int main(void){

    int a,b,c,z;

    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
       z=a;
       a=b;
       b=z;
    }
    if(c>b){
       z=b;
       b=c;
       c=z;
    }
    if(b>a){
       z=a;
       a=b;
       b=z;
     }

    printf("%d %d %d\n",c,b,a);

    return 0;

}