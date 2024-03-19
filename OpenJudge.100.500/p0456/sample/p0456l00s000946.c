#include<stdio.h>
 
int main(void){
  char a[199999],b[199999];
  int cor=0;
  scanf("%s %s",&a[0],&b[0]);
  for(int i=0; a[i]!='\0'; i++){
    if(a[i]!=b[i]){
      cor++;
    }
  }
  printf("%d",cor);
  return 0;
}
