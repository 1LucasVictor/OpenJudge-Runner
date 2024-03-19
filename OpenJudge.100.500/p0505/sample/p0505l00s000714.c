#include<stdio.h>

int main(){
  int  h,n,a[1000];
  int  cnt=0;
  scanf("%d%d",&h,&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(int i=0;i<n;i++){
    h-=a[i];
  }
  if(h<=0)
    printf("Yes");
  else
    printf("No");
  return 0;
  
}
