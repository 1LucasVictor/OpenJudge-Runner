#include<stdio.h>
int main(void){
  int a[100];
  int length,i;
  scanf("%d",&length);
  for (i=0;i<length;i++){
    scanf("%d",&a[i]);
  }
  int *n=a;
  for (i=length-1;i>0;i--){
    printf("%d ",*(n+i));
  }
  printf("%d\n",a[0]);
  return 0;
}