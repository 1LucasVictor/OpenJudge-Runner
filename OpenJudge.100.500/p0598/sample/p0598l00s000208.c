#include <stdio.h>
int main(){
 int a,b;
  scanf("%d%d",&a,&b);
  (b%a==0)?printf("%d",a+b):printf("%d",b-a);
 return 0;
}