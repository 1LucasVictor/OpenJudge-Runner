#include<stdio.h>
int main(){

int a,b,d;
scanf("%d%d",&a,&b);
d=(a+b)/2;
if(a%2==0&&b%2==0||a%2!=0&&b%2!=0){printf("%d",d);}
else if(a%2==0&&b%2!=0||a%2!=0&&b%2==0)printf("IMPOSSIBLE");
return 0;
}