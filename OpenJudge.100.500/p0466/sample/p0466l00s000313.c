#include<stdio.h>
#include<string.h>
int main(void){
  char a[11],b[11];
  int k;
  scanf("%s %s",a,b);
  b[strlen(a)]='\0';
  if(strcmp(a,b)==0) puts("Yes");
  else puts("No") ;
  
 return 0; 
}
