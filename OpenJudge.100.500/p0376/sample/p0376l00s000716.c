#include<stdio.h>
void main(){
  int n;
  int a[100];
  int i;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  i--;
  while(1){
    printf("%d",a[i]);
    if(i==0)
      break;
    printf(" ");
    i--;
  }
  printf("\n");
}