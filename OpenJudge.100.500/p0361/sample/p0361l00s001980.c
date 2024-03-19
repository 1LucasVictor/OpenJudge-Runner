#include "stdio.h"                                                  
#define HOUR 3600
#define MINUTE 60
int main(void){
int S;
int h,m,s;
scanf("%d",&S);
h=S/HOUR;
m=S%HOUR/MINUTE;
s=S%HOUR%MINUTE;
printf("%d:%d:%d\n",h,m,s);
return 0;
}