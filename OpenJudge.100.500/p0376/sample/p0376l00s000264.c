#include <stdio.h>
int main(){

  int a[100];
  int i,n;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(i=n;i>0;i--){
    printf("%d",a[i-1]);
    if(i==1) break;
    else printf(" ");
  }

  printf("\n");

  return 0;
}