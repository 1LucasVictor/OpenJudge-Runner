#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,c=0,a,v=0,b;
  char s[4];
   scanf("%s",&s);
  
  if((s[0]==s[1]&&s[2]==s[3])||(s[0]==s[2]&&s[1]==s[3])||(s[0]==s[3]&&s[1]==s[2])) printf("Yes");
  else printf("No");  
 /*for(i=1;i<4;i++){
   if(s[0]==s[i]){
     c++;
     a=i;
   }
 }
    for(i=2;i<4;i++){
     if(i!=a){
       b=i;
    }
  }
  for(i=2;i<4;i++){
    if(i!=a&&i!=b){
      if(s[b]==s[i])
        v++;
    }      
 }
 // if(c==1&&v==1)
  printf("%d %d",c,v);
  else
    printf("No");*/
}