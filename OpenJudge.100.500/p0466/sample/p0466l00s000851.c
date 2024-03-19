#include <stdio.h>
#include <string.h>
int main(void){
  int i=0;
  char s[10],a[11];
  scanf("%s",s); 
  scanf("%s",a);
  if(strlen(s)>=strlen(a)){
    puts("No");
    return 0;
  }
  while(s[i]!='\0'&&a[i]!='\0'){
    if(s[i]!=a[i]){
       puts("No");
       return 0;
    }
    i++;
  }
  puts("Yes");
  return 0; 
 }
