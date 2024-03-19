#include<stdio.h>
#include<string.h>
int main(){
 int i,slen;
 char str[21];

 fgets(str,21,stdin);
 slen=strlen(str);  
 for(i=slen-1;i>-1;i--){
  printf("%c",str[i]);
 }
 printf("\n");
 return 0;
} 