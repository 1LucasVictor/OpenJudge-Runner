#include<stdio.h>
#include<string.h>

int main(){
  char S[1000000];
  int i,z=0,o=0;
  scanf("%s",S);
  for(i=0;i<strlen(S);i++){
    if(S[i]=='0')
      z++;
    else
      o++;
  }
  
  if(z>o){
    printf("%d\n",o*2);
  }
  else
    printf("%d\n",z*2);
  return 0;
}
