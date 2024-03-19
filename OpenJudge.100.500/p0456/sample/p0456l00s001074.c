#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){
  int i,n=0,m,l;
  char s[20000],t[20000];
    
  
  scanf("%s\n",s);
  scanf("%s",t);

  l=strlen(s);
  for(i=0;i<l;i++){
    if(s[i]!=t[i])
      n++;
  }

  printf("%d\n",n);
  
  return 0;
}