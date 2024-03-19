#include<stdio.h>
int main(void){
  char a[200000],b[200000];
  int i, count=0;
  scanf("%s",&a);
  scanf("%s",&b);
  while(a[i]!='\0'){
    if(a[i]!=b[i]){
      count++;
    }
    i++;
  }
  printf("%d",count);
  return 0;
}