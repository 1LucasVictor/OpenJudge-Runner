#include <stdio.h>
int main(void){
int a,b,c,z;

scanf("%d %d %d",&a,&b,&c);

if(a>c){
z=a;
a=c;
c=z;
}
if(a>b){
z=a;
a=b;
b=z;
}
if(b>c){
z=b;
b=c;
c=z;
}
printf("%d %d %d\n",a,b,c);

return 0;
}

