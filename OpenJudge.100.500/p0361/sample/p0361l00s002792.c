#include <stdio.h>
int main(void){
int S;
scanf("%d",&S);
printf("%d:",S/3600);
printf("%d:",(S%3600)/60);
printf("%d\n",((S%3600)%60)%60);
return 0;
}