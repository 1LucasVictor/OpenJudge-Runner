#include<stdio.h>

main(){

int a,b,c,i,d,e;
e=0;

scanf("%d %d %d",&a,&b,&c);

for(i=a;i<=b;i++){
d=c%i;
if(d==0) e++;
}

printf("%d\n",e);

return 0;
}