#include <stdio.h>

int main(void){
 int a,b;
 char buf[1000];
  
  fgets(buf,sizeof(buf),stdin);
  sscanf(buf,"%d %d",&a,&b);
  if(a*b%2 == 0) printf("Even");
  else printf("Odd");
 
  return 0;
}