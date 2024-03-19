#include<stdio.h>
int main(void){
  int i,n,a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  if((a[i]%2==0&&a[i]%3!=0)||(a[i]%2==0&&a[i]%5!=0)){
    printf("DENIED");
  }
  else{
    printf("APPROVED");
  }
  return 0;
}
