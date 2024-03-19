#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int i,red,blue,l,num;
  char str[100005],*p,s[100005];
  
  fgets(str,sizeof(str),stdin);
  p=strtok(str," \n");
  strcpy(s,p);
  
  l=strlen(s);
  
  for(i=0,red=0,blue=0;i<l;i++){
    if(s[i]=='0'){
      red++;
    }else{
      blue++;
    }
  }
  
  if(red<=blue){
    num=2*red;
  }else{
    num=2*blue;
  }
  
  printf("%d\n",num);
  
  return 0;
}