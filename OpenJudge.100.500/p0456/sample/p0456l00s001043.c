#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){
  int i=0,n=0,l=0,length;
  char s[200000]={},t[200000]={};
    
  
  fgets(s,sizeof(s),stdin);
  fgets(t,sizeof(t),stdin);
  l=strlen(t);
  for(i=0;i<l-1;i++){
    if(s[i]!=t[i]){
      n++;
    }
  }

  printf("%d\n",n);
  
  return 0;
}