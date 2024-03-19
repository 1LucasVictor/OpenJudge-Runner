#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
long long int a;
char b[20];
double c;
scanf("%lld",&a);
scanf("%s",b);

long long int bb;
bb=((b[0]-'0')*100)+((b[2]-'0')*10)+((b[3]-'0')*1);
c=(double)a*bb;


printf("%lld",(long long int)c/100);
}
