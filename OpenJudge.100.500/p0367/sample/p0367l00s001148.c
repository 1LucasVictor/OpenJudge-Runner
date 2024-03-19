#include<stdio.h>

int a,b,c,i;
int d=0;
int main(void){
  scanf("%d %d %d",&a,&b,&c);
  //printf("%d %d %d",a,b,c);
  for(i=a;i<=b;i++){
    if(c%i==0){
    d++;}
    else;
}
      printf("%d\n",d);
return 0;
}
