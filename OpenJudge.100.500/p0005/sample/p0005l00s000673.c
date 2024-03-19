#include<stdio.h>

int main(){

  char a[1024];
  int i=0;
  
  fgets(a,sizeof(a),stdin);
  while(a[i]!='\n')
    i++;
  for(i=i-1;i>=0;i--)
    printf("%c",a[i]);
  printf("\n");
  return 0;
}