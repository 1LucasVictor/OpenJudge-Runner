#include<stdio.h>
#include<string.h>
int main(void){
  char a[200000],b[200000];
  int i, j, count=0;
  scanf("%s",a);
  scanf("%s",b);
  j=strlen(a);
  for(i=0; i<j; i++){
    if(a[i]!=b[i]){
      count++;
    }
  }
  printf("%d",count);
  return 0;
}