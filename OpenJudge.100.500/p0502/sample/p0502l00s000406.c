#include <stdio.h>

int main(){
  int n,f=0;
  scanf("%d",&n);
  int a[n+1];
  for(int i=1;i<=n;i++)scanf("%d",&a[i]);
  
  for(int i=1;i<=n;i++){
    if(a[i]%2==0 && a[i]%3!=0 && a[i]%5!=0){
      printf("DENIED");
      f=1;
      break;
    }
  }
  if(f==0)printf("APPROVED");
  return 0;
}

