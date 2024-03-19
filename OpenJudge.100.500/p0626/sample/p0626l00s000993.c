#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
int d,n;scanf("%d %d",&d,&n);

if(d==0){
    if(n==100){printf("101\n");}
    else{printf("%d\n",n);}
}
if(d==1){
    if(n==100){printf("10100\n");}
    else{printf("%d\n",n*100);}
}

if(d==2){
    if(n==100){printf("1010000\n");}
    else{printf("%d\n",n*10000);}
}

}