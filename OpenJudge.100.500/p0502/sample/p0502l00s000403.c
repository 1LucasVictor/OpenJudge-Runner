#include <stdio.h>
#include <stdlib.h>

int main(){
  int a[100];
  int n;
  int i;
  int approved=1;
  while(n<1||n>100){
    scanf("%d",&n);
  }
  for(i=0;i<n;i++){
    while(a[i]<1||a[i]>1000){
      scanf("%d",&a[i]);
    }
  }
  for(i=0;i<n;i++){
    if(a[i]%2==0){
      if(a[i]%3!=0 && a[i]%5!=0){
        approved=0;
      }
    }
  }
  if(approved==0){
    printf("DENIED");
  }
  else printf("APPROVED");
  return 0;
}
