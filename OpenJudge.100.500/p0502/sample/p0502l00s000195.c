#include<stdio.h>
int main()
{
  int n,a[1001];
  int x=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0){
      if(a[i]%3!=0&&a[i]%5!=0){
        x=1;
      }
    }
  }
  if(x==0){
    printf("APPROVED\n");
  }
  else{
    printf("DENIED\n");
  }
  return 0;
}