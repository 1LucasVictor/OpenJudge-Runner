#include <stdio.h>
int main(){
  int n,a[100],i;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(n;n>0;n--){
    i=n-1;
    printf("%d",a[i]);
    if(i)printf(" ");
  }
  printf("\n");
  return 0;
}