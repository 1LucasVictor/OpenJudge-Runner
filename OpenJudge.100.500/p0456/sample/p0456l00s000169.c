#include<stdio.h>
int main(void){
  char s[200020];
  char t[200020];
  int i,k=0;
  scanf("%s %s",s,t);
  for(i=0;s[i]!='\0';i++){
  if(s[i]!=t[i]) k++;
  }
  printf("%d",k); 
  
 return 0; 
}
