#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  int n,i,j,one=0,zero=0;
  char s[101000];
  scanf("%s",s);
  n=strlen(s);
  for(i=0;i<n;i++){
    if(s[i]=='0') zero++;
    else one++;
  }
  int d=fmin(zero,one);
  if(n<3&&zero!=1) d=0;
  else if(n<3&&one!=1) d=0;
  printf("%d",d*2);
  return 0;
}