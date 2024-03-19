#include <stdio.h>

int main(void){
int a;
int h;
int m;
int mm;
int s;
scanf("%d",&a);
h = a / 3600;
mm = a - 3600 * h;
m = mm / 60;
s = a - 3600 * h - 60 * m;
printf("%d:%d:%d\n",h,m,s);
}

