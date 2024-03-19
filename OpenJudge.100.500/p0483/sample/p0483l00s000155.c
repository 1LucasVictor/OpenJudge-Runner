#include<stdio.h>

int main(void){

int n,a,b,c;

scanf("%d",&n);

c=n%10;b=((n-c)/10)%10;a=(n-10*b-c)/100;

if(a==7||b==7||c==7){printf("Yes");}
else if(a!=7&&b!=7&&c!=7){printf("No");}

return 0;
}