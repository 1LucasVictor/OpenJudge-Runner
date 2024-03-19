#include<stdio.h>
#define N 10000
int main(void){
  int i,num,bi=-1,ci=0;
  int a[N]={0},b[N]={0},c[N]={0};

  for(i=0;((scanf("%d",&a[i]))==1);i++){}
  num=i;
  for(i=0;i<num;i++){
    if(1<=a[i] && a[i]<=10){
      bi++;
      b[bi]=a[i];
    }else if(a[i]==0){
      c[ci]=b[bi];
      ci++;
      b[bi]=0;
      bi--;
    }
  }
  for(i=0;c[i]!=0;i++){
    printf("%d\n",c[i]);
  }
  return 0;
}