#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
int now=0;
int count;
for(count=0;count<101;count++){
if((count>=a&&count<=b)&&(count>=c&&count<=d)){now++;}
}
if(now>=0){
printf("%d",now-1);
}
else{printf("0");}
}