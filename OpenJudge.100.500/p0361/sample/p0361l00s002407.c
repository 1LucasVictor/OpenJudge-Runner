#include<stdio.h>
int main(){
int h,m,s,S;
scanf("%d",&S);
h = S / 3600;
m = S % 3600 / 60;
s = S % 60;
printf("%d:%d:%d\n",h,m,s);
return 0;
}

