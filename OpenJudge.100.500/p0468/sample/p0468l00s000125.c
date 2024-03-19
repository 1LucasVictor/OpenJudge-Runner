#include<stdio.h>
#include<string.h>
int main(){
  char a[10],mo[2][5]={"ABC","ARC"};
  scanf("%s",a); 
  if(strcmp(a,mo[0])==0)
      printf("ARC");
  else printf("ABC");
 



return 0;
}
  