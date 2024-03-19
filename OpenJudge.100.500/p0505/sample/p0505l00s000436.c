#include<stdio.h>
int main(){
  int i,a[10000],h,n,ans;
  scanf("%d %d",&h,&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    ans+=a[i];
    if(ans>=h){
      printf("Yes");
      break;
    }
  }
  if(ans<h)
    printf("No");
  return 0;
}