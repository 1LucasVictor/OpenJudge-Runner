#include<stdio.h>
int main()
{
  int h,n,a;
  int sum=0;
  scanf("%d %d",&h,&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a);
    sum+=a;
  }
  if(h<=sum){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  return 0;
}