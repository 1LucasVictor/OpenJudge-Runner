#include<stdio.h>

int main(void){
  char a[200000],b[200000];
  int cor=0;
  if(scanf("%s %s",a,b)==1){};
  for(int i=0; a[i]!='\0'; i++){
    if(a[i]!=b[i]){
      cor++;
    }
  }
  printf("%d",cor);
  return 0;
}
