#include<stdio.h>
int main(){
  int h,n,i,count=0;
  scanf("%d%d",&h,&n);
  int a[n+1];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    count+=a[i];
  }
  if(count>=h)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;  
}
