#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
double a;
char b[20];
double c;
scanf("%lf",&a);
scanf("%s",b);

int bb;
bb=((b[0]-'0')*1000)+((b[2]-'0')*100)+((b[3]-'0')*10);
c=a*bb;
c=c/1000;

printf("%lld",(long long int)c);
}
