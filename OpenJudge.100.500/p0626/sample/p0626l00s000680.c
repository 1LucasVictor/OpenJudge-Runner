#include<stdio.h>

int main(void){
	int d,n,hund=1;
    scanf("%d %d", &d,&n);
    for(int i = 1;i <= d;i++){
    	hund *= 100;
    }
    printf("%d\n",n * hund);
}