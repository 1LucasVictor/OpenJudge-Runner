#include<stdio.h>

int main(void){
int a,b,s,d;

while(scanf("%d %d",&a,&b)!=EOF){

s=a+b;
d=0;
while(!(s<1)){
  s=s/10;
  d++;
}
printf("%d\n",d);
}
return 0;
}