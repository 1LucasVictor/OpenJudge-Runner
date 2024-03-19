#include<stdio.h>

int main(){
int i,a,b,d;
int c[3];
scanf("%d",&a);
scanf("%d",&b);
c[0]=a+b;
c[1]=a-b;
c[2]=a*b;

d=c[0];
for(i=0;i<3;i++){
  if(c[i]>=d){
     d=c[i];
}
}

printf("%d",d);

return 0;
}