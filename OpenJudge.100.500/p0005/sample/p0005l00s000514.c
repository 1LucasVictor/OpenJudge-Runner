#include<stdio.h>
#include<string.h>

int main(){
  int i,len,j;
  char str[20];
  scanf("%s",str);
  len = strlen(str);
  char str2[len],rts[len];
  for(j=0;j<=len;j++){
    str2[j] = str[j];
  }
  for(i=len;i>=0;i--){
  rts[i] = str2[len-i-1];
  }
  printf("%s\n",rts);
  
  return 0;
}