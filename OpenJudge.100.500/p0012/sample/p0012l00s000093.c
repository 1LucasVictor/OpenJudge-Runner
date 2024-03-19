#include<stdio.h>
int main(){
  int a[11],n,i,cnt=0;
  while(scanf("%d",&n)!=EOF){
    if(n==0){
      cnt--;
      printf("%d\n",a[cnt]);
    }else{
      a[cnt]=n;
      cnt++;
    }
  }
  return 0;
}