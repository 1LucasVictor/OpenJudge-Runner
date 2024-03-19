#include<stdio.h>
int main(void){
  int n,a[100],i,f;
  scanf("%d",&n);
  f=0;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0){
      if(a[i]%3!=0&&a[i]%5!=0){
	f++;
      }
    }
  }
  if(f>0){
    printf("DENIED\n");
      }else{
    printf("APPROVED\n");
  }
  return 0;
}
