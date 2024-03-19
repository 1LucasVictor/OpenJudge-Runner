#include<stdio.h>
int main(){
  int n,i,check=0;
  scanf("%d",&n);
  int a[n+1];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    if(a[i]%2==0){
      if(a[i]%5!=0 && a[i]%3!=0)
        check=1;
    }
  }
  if(check==0)
    printf("APPROVED\n");
  else
    printf("DENIED\n");
  return 0;
}
