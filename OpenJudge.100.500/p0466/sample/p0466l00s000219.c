#include<stdio.h>
#include<string.h>
int main(){
  char s[20];
  char t[21];
  int i;
  
  scanf("%s",s);
  scanf("%s",t);
  
  
  t[strlen(s)]='\0';
  
  
  if(strcmp(s,t)==0){
   printf("Yes\n");
    return 0;
  }
  printf("No\n");
  
  
 return 0; 
}

