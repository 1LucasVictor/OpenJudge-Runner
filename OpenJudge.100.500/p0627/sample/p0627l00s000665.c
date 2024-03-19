#include<stdio.h>
#include<string.h>
int main(){
  int a,b,c[3];
  scanf("%d%d",&a,&b);
  c[0]=a+b;
  c[1]=a-b;
  c[2]=a*b;
  if((c[0]>=c[1])||(c[0]>=c[2]))printf("%d",c[0]);
    else if((c[1]>=c[0])||(c[1]>=c[2]))printf("%d",c[1]);
  else printf("%d",c[2]);
return 0;

}