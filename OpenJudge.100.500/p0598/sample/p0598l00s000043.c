#include <stdio.h>
 
int main(void){
  int a,b;
  scanf("%d %d",&a,&b);
  
  int s;
  
  s=b/a;
  s=s*100;
  
  if(s==(b*100)/a){
    printf("%d",a+b);
  }else{
    printf("%d",b-a);
  }

return 0;
}