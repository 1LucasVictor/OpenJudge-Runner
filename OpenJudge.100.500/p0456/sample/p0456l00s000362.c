#include<stdio.h>
int main(void)
{
  char a[100],b[100];
  int i=0,n=0;
  scanf("%s%s",a,b);
  while(1){
    if(a[i]=='\0'){
      break;
    }
    if(a[i]!=b[i]){
      n++;
    }
    i++;
  }
  printf("%d\n",n);
  return 0;
}