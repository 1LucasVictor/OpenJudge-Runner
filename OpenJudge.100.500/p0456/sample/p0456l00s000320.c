#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){
  int i,n=0,l;
  char s[200000],t[200000];
    
  
  fgets(s,sizeof(s),stdin);
  fgets(t,sizeof(t),stdin);

  l=strlen(s);
  for(i=0;i<l;i++){
    if(s[i]!=t[i]){
      n++;
    }
  }

  printf("%d\n",n);
  
  return 0;
}