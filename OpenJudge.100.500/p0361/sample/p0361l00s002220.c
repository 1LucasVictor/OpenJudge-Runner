#include<stdio.h>
int main(void){
int i;
scanf("%d",&i);
printf("%d:%d:%d\n",i/3600,(i%3600)/60,i%3600%60);
return 0;
}