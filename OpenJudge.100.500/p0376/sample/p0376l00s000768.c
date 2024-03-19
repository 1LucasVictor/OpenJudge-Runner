#include<stdio.h>
int main()
{
  int i,n,a[1000];
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  for(i=n;i>=1;i--){
    printf("%d",a[i]);
    if(i==1){
      printf("\n");
    }
    else{
        printf(" ");
      }
  }
    return 0;
}

