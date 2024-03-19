#include<stdio.h>

int main(void){
  int i,pi;
  int a[100000]={0},b[100000]={0};
  int x,y;

  for(i=0;scanf("%d%d",&a[i],&b[i])==2;i++){}
  pi=i;
  for(i=0;i<pi;i++){
    x=a[i];
    y=b[i];
    for(;;){
      if(a[i]>b[i])       a[i]-=b[i];
      else if(a[i]<b[i])  b[i]-=a[i];
      else{
        printf("%d ",a[i]);
        break;
      }
    }
    x/=a[i];
    printf("%d\n",x*y);
  }
  return 0;
}